#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at most
 * an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *	Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i;

	/* Check if either string is NULL and treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[len1])
		len1++;

	/* Calculate the length of s2, up to n characters */
	while (s2[len2] && len2 < n)
		len2++;

	/* Allocate space in memory for the new string */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	/* Concatenate the strings */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	/* Null-terminate the new string */
	concat[len1 + len2] = '\0';

	return (concat);
}
