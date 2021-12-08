#include "main.h"
/**
 * cd - change directory
 * @tokens: array tokens
 * Return:0
 */
int cd(char **tokens)
{
	char s[100];
	char *path;

	path = getcwd(s, sizeof(s));

	strcat(path, "/");
	strcat(path, tokens[1]);
	chdir(path);
	return (0);
}
