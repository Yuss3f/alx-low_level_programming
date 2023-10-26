#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number.
 * @n: the number to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Numbers <= 1 are not prime numbers */
	return (check_prime(n, 2));
}

/**
 * check_prime - checks for a prime number recursively.
 * @n: the number to be checked
 * @i: iterator used for checking divisibility
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n) /* Checks till square root of n */
		return (1);  /* n is a prime number */
	if (n % i == 0)
		return (0);  /* n is not a prime number */
	return (check_prime(n, i + 1)); /* Recursive call */
}
