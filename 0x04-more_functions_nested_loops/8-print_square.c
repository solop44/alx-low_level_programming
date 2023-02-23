#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_square - prints a square with #
 * @size: size of square
 */

void print_square(int size)
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
		while (j < n)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
