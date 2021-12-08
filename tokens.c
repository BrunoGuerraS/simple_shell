#include "main.h"
/**
 * tokens - handle tokens
 * @buffer: pointer to buffer
 * @env: enviroments variables
 * Return: 0
 */
int tokens(char *buffer, char **env)
{
	int i = 0;
	char **tokens = NULL,  buffer1[MAX],  *savetoken;
	int (*t)(char **token);
	const char *str1 = "/bin/", *str2;
	ssize_t validador;

	tokens = malloc(sizeof(char *) * 8);
	if (tokens == NULL)
		return (0);
	while ((tokens[i] = strtok(buffer, " \n")) != NULL)
	{
		buffer = NULL;
		i++;
	}
	if (tokens[0] && tokens[0][0] != '/')
	{
		savetoken = tokens[0];
		str2 = tokens[0];
		memccpy((char *)memccpy(buffer1, str1, '\0', MAX) - 1, str2, '\0', MAX);
		tokens[0] = buffer1;
	}
	validador = access(tokens[0], X_OK);
	if (validador != -1)
	{
		_printPath(tokens, env, savetoken);
	}
	else
	{
		t = handle(tokens[0]);
		if (t != 0)
		{
			t(tokens);
		}
		else
		{
			printf("shell say command not found: %s\n", savetoken);
		}
	}
	return (0);
}
