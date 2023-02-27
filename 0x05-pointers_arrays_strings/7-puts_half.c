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
	int i;
	int length = strlen(str);

	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
