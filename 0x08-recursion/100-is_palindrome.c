#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string to check
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	/* An empty string is a palindrome */
	if (len == 0)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - helper function to check for a palindrome recursively.
 * @s: the string to check
 * @start: the starting index of the string to check
 * @end: the ending index of the string to check
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
	/* Base case for recursion */
	if (start >= end)
		return (1);

	/* If characters do not match */
	if (s[start] != s[end])
		return (0);

	/* Move towards the middle of the string */
	return (check_palindrome(s, start + 1, end - 1));
}
