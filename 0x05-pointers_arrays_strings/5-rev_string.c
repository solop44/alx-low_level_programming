#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Prints a reversed string
 * @s: string
 * Return: Void
 */
void rev_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
