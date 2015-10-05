#include <unistd.h> // header for POSIX API compatibility
#include <stdio.h> // header for standard system I/O, we need this to do file operations

int main() // main program function
{
	int ret; // integer variable type storing return value from truncate
	ret = truncate ("./pirate.txt", 45); // attempt to open pirate.txt in current dir, truncate it to 45 bytes
	if (ret == -1) { // if return is -1, truncate failed
		perror ("truncate");  // display error "truncate"
		return -1; // return exitcode -1 to shell to indicate error
	}
 	return 0; // return 0 to shell, everything worked
}
