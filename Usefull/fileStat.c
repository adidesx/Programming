#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	struct stat fileStat;

	int fileFd = stat(argv[1], &fileStat);
	if (fileFd == -1)
		perror("Stat Failed : ");
	else 
		printf("File GID : %d\n", fileStat.st_gid);
	return 0;
}
