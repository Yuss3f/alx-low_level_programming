#include "main.h"

/**
 * is_delimiter - checks if a character is a delimiter
 * @c: character to be checked
 *
 * Return: 1 if it's a delimiter, 0 otherwise
 */
int is_delimiter(char c)
{
	char delimiters[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; delimiters[i]; i++)
	{
		if (c == delimiters[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/*Capitalize the first character if it's lowercase*/
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= ('a' - 'A');

	i++;

	/*Loop through the string*/
	while (str[i])
	{
		if (is_delimiter(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= ('a' - 'A');
		i++;
	}

	return (str);
}
