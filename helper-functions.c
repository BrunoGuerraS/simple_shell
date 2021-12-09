#include "main.h"
/**
 * _trim - function that removes whitespace at the beginning
 * @str: double pointer to string to format
 */
void _trim(char **str)
{
	int i = 0, j = 0, len = 0;
	char *tmp = *str;
	char *fstr = NULL;

	if (**str == ' ')
	{
		while (*(*str + i) == ' ' && *(*str + i) != '\0')
			i++;
		while (*(*str + i + len) != '\0')
			len++;

		fstr = malloc(sizeof(char) * len + 1);
		while (*(*str + i) != '\0')
		{
			*(fstr + j) = *(*str + i);
			i++;
			j++;
		}
		/*fstr -> ls - 1\0*/
		*(fstr + j) = '\0';
		*str = fstr;
		free(tmp);
	}
}
