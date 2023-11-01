#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if no error, 1 if error.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int values[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents; i++)
	{
		coins += cents / values[i];
		cents %= values[i];
	}

	printf("%d\n", coins);
	return (0);
}
