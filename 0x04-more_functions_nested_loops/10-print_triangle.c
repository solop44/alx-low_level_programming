#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of triangle
*/

void print_triangle(int size)
{
	int i;
	int space;

	if (size <= 0)
	{
		_putchar("\n");
		exit(0);
	}

	for (i = 0; i < size; i++)
	{
		space = 0;
		while (space < (size - i - 1))
		{
			_putchar(" ");
			space++;
		}
		for (int j = 0; j <= i; j++)
		{
			_putchar("#");
		}
		_putchar("\n");
	}
}

