#include "main.h"
/**
* kpsh_split_strings - splits the string goten from the user
* as input into tokens and terminate them with null
* @str: the string to be splited/tokenized
* Return: an array of tokens obtained by spliting the input string
*/

char **kpsh_split_strings(char *str)
{
	int buffsize, i;
	char **tokens;
	char *token;

	buffsize = BUFF_SIZE;
	i = 0;
	tokens = malloc(buffsize * sizeof(char *));
	if (tokens == NULL)
	{
		exit(EXIT_FAILURE);
	}

	token = strtok(str, DELIMITER);

	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		if (i >= buffsize)
		{
			buffsize += BUFF_SIZE;
			tokens = realloc(tokens, buffsize * sizeof(char *));
			if (tokens == NULL)
			{
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, DELIMITER);
	}

	tokens[i] = NULL;

	return (tokens);
}
