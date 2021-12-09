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
	int getl;
	size_t bufsize = 0;
	/*char *prompt = "linux $";*/
	char *buffer = NULL;
	/*hacer un error con el argv[0]*/
	(void)argc;
	(void)argv;

	while (getl != -1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "linux~$ ", 15);
		getl = (getline(&(buffer), &bufsize, stdin));
		if (getl == EOF)
			break;
		trim(&buffer);

		if (getl <= 1)
		{
			continue;
		}
		tokens(buffer, env);
		free(buffer);
		buffer = NULL;
	}
	free(buffer);
	return (0);
}

