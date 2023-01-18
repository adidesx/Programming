#include "fileStructures.hpp"
#include "userGroup.hpp"
#include "fileDetails.hpp"

void createAllDirs( const aCreateDirs* dCreateDirs );
bool createDirs( const char *pathName, const uid_t user, const gid_t group, const mode_t perm );
