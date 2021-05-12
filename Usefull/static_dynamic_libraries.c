// https://embeddedgeeks.com/embedded-linux/libraries/

/* Static and dynamic

	Compile binary statically
	gcc <binary> -o <name> --static

	ldd <binary>	// gives libraries used by the binary
	size <binary>   // gives size of binary
	nm <binary>     // list symbols from object files 

*/

#include <stdio.h>

int main()
{
	printf("Aditya Deshpande\n");
	return 0;
}
