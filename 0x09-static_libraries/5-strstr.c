#include "main.h"
#include <stdio.h>
/**
 * *_strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
	int iqe, jqe;

	for (iqe = 0; haystack[iqe] > '\0'; iqe++)
	{
		for (jqe = iqe; haystack[jqe] > '\0' && needle[jqe - iqe] > '\0'; jqe++)
		{
			if (haystack[jqe] != needle[jqe - iqe])
			{
				break;
			}
		}
		if (needle[jqe - iqe] == '\0')
		{
			return (haystack + iqe);
		}
	}

	return (0);
}
