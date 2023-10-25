/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string whose length is to be calculated
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /*  base case: if end of string is reached */
		return (0);

	return (1 + _strlen_recursion(s + 1));
	/* add 1 to the length for each recursive call */
}
