#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: length of diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n <= 0)
	{
		_putchar('\n');
		exit(0);
	}

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
