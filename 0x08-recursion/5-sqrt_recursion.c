#include "main.h"

int _sqrt_check(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Base case for negative numbers */
	return (_sqrt_check(n, 0));
}

/**
 * _sqrt_check - helper function to check for the square root.
 * @n: the number to find the square root of
 * @i: the current number to test
 * Return: the natural square root of n, or -1 if none
 */
int _sqrt_check(int n, int i)
{
	if (i * i > n)
		/* If square exceeds n, n doesn't have a natural square root */
		return (-1);
	if (i * i == n)  /* Found the square root */
		return (i);
	return (_sqrt_check(n, i + 1));  /* Recur with next number */
}
