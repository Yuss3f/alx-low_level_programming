#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted from string
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1;
	unsigned long int resp;
	int i;


	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;


	while (divisor >= 1)
	{
		resp = n / divisor;
		_putchar('0' + (resp % 10));
		n -= resp * divisor;
		divisor /= 10;
	}
}

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}

unsigned long int result = atoi(argv[1]) * atoi(argv[2]);
	print_int(result);
	putchar('\n');

	return (0);
}
