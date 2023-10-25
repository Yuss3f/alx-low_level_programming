#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line using recursion.
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* base case: if end of string is reached */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);       /* print the current character */
	_puts_recursion(s + 1);  /* move to the next character */
}
