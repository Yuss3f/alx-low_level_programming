#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a number
 * @str: the string to check
 *
 * Return: 1 if string is a number, 0 otherwise
 */
int is_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
	str++;
	}
	return (1);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success, or 98 on failure
 */
int main(int argc, char *argv[])
{
	unsigned long long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoll(argv[1]);
	num2 = atoll(argv[2]);
	result = num1 * num2;

	printf("%llu\n", result);

	return (0);
}
