#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * rot13 - encodes letter using rot13
 *
 * @n: string
 * Return: string
 */

char *rot13(char *n)
{
	int length = strlen(n);
	int value;
	int char_val;

	for (int i = 0; i < length; i++)
	{
		if (!(isalpha(text[i])))
		{
			continue;
		}

		char_val = n[i]
		value = isupper(n[i]) ? 65 : 97;
		n[i] = (char)add_key % 26 + value;
	}
	return (n);
}
