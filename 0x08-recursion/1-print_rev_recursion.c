#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion.
 * @s: the string to print in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* base case: if end of string is reached */
		return;

	_print_rev_recursion(s + 1);  /* move to the next character first */
	_putchar(*s);       /* then print the current character */
}
