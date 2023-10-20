#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds two numbers and ensures the result fits within a buffer.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to hold the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result string, or 0 if the result cannot be stored.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, sum = 0;
	int i, j, k;

	if (size_r <= len1 + 1 || size_r <= len2 + 1)  /*Including the null byte*/
		return (0);

	for (i = len1 - 1, j = len2 - 1, k = 0;
		i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (k >= size_r - 1)  /*Need space for current number and null byte*/
			return (0);

		r[k] = (sum % 10) + '0';
		carry = sum / 10;
	}

	r[k] = '\0';

	/*Reverse the string to get the correct order*/
	for (int start = 0, end = k - 1; start < end; start++, end--)
	{
		char tmp = r[start];

		r[start] = r[end];

		r[end] = tmp;
	}

	return (r);
}
