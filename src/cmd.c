#include <stdio.h>
#include <string.h>

int parsecmd(char *cmd)
{
	unsigned i;
	for (i = 0; i < strlen(cmd); i++)
	{
		printf("%X\n", cmd[i]);
	} 
}
