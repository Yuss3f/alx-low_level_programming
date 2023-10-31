#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;  /* for '\n' */
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	/* +1 for '\0' */

	if (str == NULL)
		return (NULL);

	temp = str;

	/* Concatenate arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*temp++ = av[i][j];

		*temp++ = '\n';
	}

	*temp = '\0';

	return (str);
}
