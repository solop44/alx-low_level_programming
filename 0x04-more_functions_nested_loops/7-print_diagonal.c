#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: length of diagonal
 */

void print_diagonal(int n)
{
	int i;

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
			putchar(' ');
			j++;
		}
		putchar('\\');
		putchar('\n');
		i++;
	}
	_putchar('\n');
}
