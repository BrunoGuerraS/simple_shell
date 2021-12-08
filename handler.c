#include "main.h"
/**
 * handle - handle functions
 * @tokens: a token
 * Return: 0
 */
int (*handle(char *tokens))(char **token)
{
	int i = 0;
	hc comands[] = {
		{"/bin/cd", cd},
		{"/bin/exit", salida},
		{0, NULL}

	};

	if (tokens == NULL)
		return (0);
	while (comands[i].t != NULL)
	{
		if (strcmp(tokens, comands[i].token) == 0)
		{
			return (comands[i].t);
		}
		i++;
	}
	return (0);
}
