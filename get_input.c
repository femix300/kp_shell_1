#include "main.h"

char *kpsh_get_input(void)
{
	char *input = NULL;
	ssize_t bufsize;

	bufsize = 0;
	if (getline(&input, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		perror("getinput");
		exit(EXIT_FAILURE);
	}

	return (input);
}

