#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
	int i, j;
	char alphabets[] = "aAeEoOtTlL";
	char numbers[] = "4300711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alphabets[j]; j++)
		{
			str[i] = (str[i] == alphabets[j]) ? numbers[j] : str[i];
		}
	}

	return (str);
}
