#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is to be calculated
 *
 * Return: factorial of n if n >= 0, -1 otherwise
 */
int factorial(int n)
{
	/* Base case for n < 0 (error condition) */
	if (n < 0)
		return (-1);

	/* Base case for factorial of 0 */
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
	/* n multiplied by factorial of (n-1) */
}
