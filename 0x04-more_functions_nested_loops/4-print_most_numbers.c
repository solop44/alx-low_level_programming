#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers 0 - 9
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
