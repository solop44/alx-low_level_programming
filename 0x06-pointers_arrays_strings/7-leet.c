#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * leet - encodes letter
 *
 * @n: string
 * Return: string
 */

char *leet(char *n)
{
	int i, j;
	char lett[6] = {'a', 'e', 'o', 't', 'l'};
	char eqi[6] = {'4', '3', '0', '7', '1'};
	int length = strlen(n);

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (tolower(n[i]) == lett[j])
			{
				n[i] = eqi[j];
			}
		}
	}
	return (n);
}
