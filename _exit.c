#include "main.h"
/**
 * salida - handler exit
 * @tokens: array of tokens
 * Return: 0
 */
int salida(char **tokens)
{
	int num;

	num = atoi(tokens[0]);
	exit(num);

	return (0);
}
