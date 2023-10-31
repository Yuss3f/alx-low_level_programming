#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to be checked.
 *
 * Return: number of words in the string.
 */
int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string.
 *
 * Return: If str == NULL, str == "", or the function fails - NULL.
 *		Otherwise - a pointer to the array of words.
 */
char **strtow(char *str)
{
	char **words = NULL;
	int wc = word_count(str);
	int i, j, k, word_len;

	if (!str || !*str || wc == 0)
		return (NULL);

	words = (char **)malloc((wc + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	for (i = 0, k = 0; i < wc; i++)
	{
		while (str[k] == ' ')
			k++;
		word_len = 0;
		j = k;
		while (str[j] != ' ' && str[j] != '\0')
		{
			word_len++;
			j++;
		}
		words[i] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!words[i])
		{
			while (i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		j = 0;
		while (str[k] != ' ' && str[k] != '\0')
			words[i][j++] = str[k++];
		words[i][j] = '\0';
	}
	words[wc] = NULL;

	return (words);
}
