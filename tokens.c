#include "main.h"
#ifndef MAX
#define MAX 100
#endif
/**
 * tokens - handle tokens
 * @buffer: pointer to buffer
 * @env: enviroments variables
 * Return: 0
 */
int tokens(char *buffer, char **env)
{
	int i = 0;
	char **tokens = NULL;
	int childId;

	// int (*t)(char **token, char **env);
	const char *str1 = "/bin/";
	const char *str2;
	char buffer1[MAX];

	pid_t pid;

	tokens = malloc(sizeof(char *) * 8);
	if (tokens == NULL)
	{
		return (0);
	}

	while ((tokens[i] = strtok(buffer, " \n")) != NULL)
	{
		buffer = NULL;
		i++;
	}

	if (tokens[0][0] != '/')
	{
		str2 = tokens[0];
		memccpy(memccpy(buffer1, str1, '\0', MAX) - 1, str2, '\0', MAX);
		tokens[0] = buffer1;
	}
	else
	{
	}
	/* AQUI USAR EL FORK*/
	pid = fork();

	if (pid > 0)
	{
		wait(&childId);
	}
	else if (pid == 0)
	{
		execve(tokens[0], tokens, env);
		kill(getpid(), SIGKILL);
	}
	else
	{
		printf("2error tu codigo esta mal. a la");
	}


	return (0);
}
