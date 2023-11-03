#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 *	and initializes it to zero.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb or size is 0 or if malloc fails - NULL.
 *	Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total size and allocate memory */
	total_size = nmemb * size;
	ptr = malloc(total_size);

	/* Check if malloc was successful */
	if (ptr == NULL)
		return (NULL);

	/* Initialize allocated memory to zero */
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
