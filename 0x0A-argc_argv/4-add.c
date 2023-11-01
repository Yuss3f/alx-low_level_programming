#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if s is a number
 * @s: string to check
 * Return: 0 if not number, 1 if number
 */
int is_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if success, 1 if error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
