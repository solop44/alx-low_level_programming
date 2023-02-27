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
	int i, length = strlen(str), half = length / 2;

	if (length % 2 != 0)
	{
		half += 1;
	}

	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
