#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * cap_string - Capitalizes first letter of a word
 *
 * @n: string.
 * Return: string
 */

char *cap_string(char *n)
{
	int i, j;
	char sep[] = "\t\n,;. !?\"(){}";
	int length = strlen(n);

	n[0] = toupper(n[0]);

	for (i = 1; i < length; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (n[i - 1] == sep[j] && n[i] != sep[j])
			{
				n[i] = toupper(n[i]);
			}
		}
	}
	return (n);
}
