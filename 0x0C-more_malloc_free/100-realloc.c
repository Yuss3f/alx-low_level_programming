#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size equals old_size, return the original pointer */
	if (new_size == old_size)
		return (ptr);

	/* If new_size is zero and ptr is not NULL, free the block and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, the call is equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Allocate memory for the new block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the contents from the old block to the new block */
	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

	/* Free the old block */
	free(ptr);

	return (new_ptr);
}
