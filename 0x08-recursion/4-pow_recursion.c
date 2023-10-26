#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base number
 * @y: exponent
 * Return: x raised to the power of y, -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);  /*  Base case for negative exponent */
	else if (y == 0)
		return (1);   /*  Base case for zero exponent */
	else
		return (x * _pow_recursion(x, y - 1));  /* Recursive step */
}
