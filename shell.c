#include "main.h"
/**
 * main - handle commants of own shell
 * @argv: number of elements
 * @argc: array of elements
 * @env: env variable
 * Return: 0
 */
int main(int argc, char **argv, char **env)
{
	char *buffer = NULL;
	size_t bufsize;
	int i = 0;
	char *prompt = "(bruno)~linux $";

	char getl;

	while (getl != -1)
	{
		printf("%s", prompt);
		getl = (getline(&(buffer), &bufsize, stdin));
		tokens(buffer, env);
		buffer = NULL;
	}

	return (0);
}
