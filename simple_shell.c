#include "main.h"
/**
 * main - handle commants of own shell
 * @argv: number of elements
 * @argc: array of elements
 * @enviroment: env variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("upps..");
		exit(1);
	}

	printf("$ ");
	characters = getline(&buffer, &bufsize, stdin);
	
	return (0);
}
