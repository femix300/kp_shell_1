#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

void iplt_env()
{
	int h = 0;
	while (envp[h] != NULL){

		printf("%s\n", envp[h]);
		h++;
	}
}
