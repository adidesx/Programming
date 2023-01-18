#include <errno.h>
#include <string.h>
#include <fts.h>

#include <iostream>
#include <vector>

using namespace std;


int dir_tree_scan(const string & in_path, vector<string> & found_paths)
{

    char * cstr = new char[in_path.length() + 1];
    strcpy(cstr, in_path.c_str());

    char * path[2] {cstr, nullptr};

    size_t i {0};


    FTS *tree = fts_open(path, FTS_NOCHDIR, 0);

    if (!tree)
    {
        delete[] cstr;
        perror("fts_open");
        return 1;
    }

    FTSENT *node;

    while ((node = fts_read(tree)))
    {
/*        if (node->fts_level > 0 && node->fts_name[0] == '.')
        {
            //fts_set(tree, node, FTS_SKIP);
        }
        else*/

        if (node->fts_info & FTS_F)
        {
            if (i % 100 == 0)
            {
                cout  << "\r" << "Read " << i << " files "
                      << "in " << in_path << "\n"
                      << flush;
            }

            ++i;

           found_paths.emplace_back<string>(node->fts_path);
        }
    }

    if (errno)
    {
        delete[] cstr;
        perror("fts_read");
        return 1;
    }

    if (fts_close(tree))
    {
        delete[] cstr;
        perror("fts_close");
        return 1;
    }

    delete[] cstr;
    return 0;
}



int main(int argc, char **argv) {


    std::string in_folder = "Aditya";



    std::vector<string> found_files;

    if (dir_tree_scan(in_folder, found_files) == 1)
    {
        cout << "some error occured";
        return 1;
    }



    for (const string & a_file : found_files)
    {
        cout << a_file << endl;
    }

    cout << "\nFound "<< found_files.size() <<" files" << endl;


    return 0;
}
