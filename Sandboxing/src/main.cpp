#include <stdio.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <unistd.h>
#include "fileStructures.hpp"
#include "userGroup.hpp"
#include "fileDetails.hpp"

void createAllDirs( const aCreateDirs* dCreateDirs );
bool createDirs( const char *pathName, const uid_t user, const gid_t group, const mode_t perm );

bool createDirs( const char *pathName, const uid_t user, const gid_t group, const mode_t perm )
{
        bool success = true;

        // Directory Creation
        int mkdir_fd = mkdir(pathName, perm);
        if(mkdir_fd == -1) {
                perror("mkdir Failed : ");
                success = false;
        }

        if ( success )
        {
                if ( 0 != chown( pathName, user, group ) ) {
                        perror("Chown Failed : ");
                        success = false;
                }

                if ( 0 != chmod( pathName, perm ) )
                {
                        perror("Chmod Failed : ");
                        success = false;
                }
        }
        return success;
}

void createAllDirs(const aCreateDirs* dCreateDirs)
{
    int i = 0;
    while ( dCreateDirs[i].pathName != NULL )
    {
        createDirs( dCreateDirs[i].pathName, dCreateDirs[i].user, dCreateDirs[i].group, dCreateDirs[i].perm );
        i++;
    }
}

int main()
{
	createAllDirs( iCreateDirs );

/*
	Change file attributes
	changeFileAttr()

	Recurssively change file attributes
	recAttrChange()

	Move files from one location to another with file attribute change
	movAndAttrChange()

	Reset file system
	resetFileSystem()

	GPIO attributes change
	gpioAttrChange()

	Sysfs attributes changes
	sysfsAttrChange()
*/

	return 0;
}
