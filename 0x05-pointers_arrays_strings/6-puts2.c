#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every other letter in a string
 * @str: string
 * Return: Void
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
