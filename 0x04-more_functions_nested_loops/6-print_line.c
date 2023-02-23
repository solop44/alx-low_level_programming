#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_line - prints a straight line
 * @n: length of line
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
	exit(0);
	}

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
