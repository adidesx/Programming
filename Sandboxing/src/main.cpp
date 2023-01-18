#include <stdio.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <unistd.h>
#include "fileStructures.hpp"
#include "userGroup.hpp"
#include "fileDetails.hpp"

void createAllDirs( const aCreateDirs* dCreateDirs );
bool createDirs( const char *pathName, const uid_t user, const gid_t group, const mode_t perm );

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
