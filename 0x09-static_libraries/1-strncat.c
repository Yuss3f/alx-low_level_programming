#include "main.h"

/**
 * _strncat - concatenate n bytes of a string to another string
 * @dest: the string to concatenate to
 * @src: the string to be concatenated
 * @n: number of bytes to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	/* Find the length of dest */
	while (dest[dest_len])
		dest_len++;

	/* Concatenate characters from src to dest */
	while (i < n && src[i])
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Add a null-terminator to dest */
	dest[dest_len] = '\0';

	return (dest);
}
