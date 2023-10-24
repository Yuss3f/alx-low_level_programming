#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string in which to check for the substring
 * @needle: substring to locate
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* If needle is an empty string, return the entire haystack */
	if (*needle == '\0')
	return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		;

		/*
		 * If the entire substring was found, return a pointer
		 * to the start of the substring in haystack
		*/
		if (needle[j] == '\0')
		return (&haystack[i]);
	}

	/* If no match is found, return NULL */
	return (NULL);
}
