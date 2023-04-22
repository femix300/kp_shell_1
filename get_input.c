#include "main.h"

/**
* kpsh_get_input - a function that gets user input from
* stdin
* Return: the input gotten from the user as a string
*/

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

