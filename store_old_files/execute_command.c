#include "main.h"

int execute_command(char **args)
{
	pid_t pid;
	int status;

	if (strcmp(args[0], "exit") == 0)
	{
		return kpsh_exit(args);
	}

	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) < 0)
		{
			perror("Error:");
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &status, WUNTRACED);
	}

	return (1);
}
