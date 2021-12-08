#include "main.h"
/**
 * _printPath - find into path
 * @tokens: array of tokens
 * @env: env variables
 * @savetoken: first token
 * Return: int
 */
int _printPath(char **tokens, char **env, char *savetoken)
{
	pid_t pid;
	int a;
	int childId;

	pid = fork();

	if (pid > 0)
	{
		wait(&childId);
	}
	else if (pid == 0)
	{
		a = execve(tokens[0], tokens, env);
		if (a == -1)
		{
			printf("shell say command not found: %s\n", savetoken);
		}
		kill(getpid(), SIGKILL);
	}
	free(tokens);
	return (0);
}
