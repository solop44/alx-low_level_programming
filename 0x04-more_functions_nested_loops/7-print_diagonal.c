#include "main.h"
#include <stdio.h>


/**
 * print_diagonal - prints a diagonal line
 * @n: length of diagonal
 * Return: Void.
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
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
	if (n <= 0)
	{
		_putchar('\n');

	}
}
