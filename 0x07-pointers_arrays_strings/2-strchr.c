#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to search in
 * @c: the character to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

    /* Check for the null terminator character */
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
