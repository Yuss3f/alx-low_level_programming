#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of size bytes of the buffer pointed by b.
 * @b: Pointer to the buffer.
 * @size: Number of bytes to print from the buffer.
 *
 * Description: The function will print the content in a specific format:
 *		- 10 bytes per line.
 *		- Each line starts with the position of the first byte (in hex).
 *		- Shows the hex content, 2 bytes at a time, separated by space.
 *		- Each non-printable character is printed as a dot.
 * Return: None.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}
		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (isprint(b[i + j]))
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		printf("\n");
		}
}

