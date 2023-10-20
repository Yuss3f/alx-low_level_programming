#include "main.h"

/**
 * _strncpy - copies at most n characters of a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy the src string into dest until n bytes or until src ends */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Fill the remaining bytes with '\0' if n is more than the length of src */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
