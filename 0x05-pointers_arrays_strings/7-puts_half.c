#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints hals of a string
 * @str: string
 * Return: Void
 */
void puts_half(char *str)
{
	int i, half = length / 2, length = strlen(str);

	if (length % 2 != 0)
	{
		half = (length - 1) / 2;
	}

	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
