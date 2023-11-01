#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to evaluate
 * @accept: characters to compare against
 *
 * Return: number of bytes in the initial segment of s which consist only
 *	of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

	/* If we went through the entire accept string and found no match */
	if (!accept[j])
	{
		break;
	}
	}

	return (i);
}
