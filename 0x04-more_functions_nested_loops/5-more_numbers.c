#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers 0 - 14, 10 times
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				putchar(j / 10 + '0');
			}
			putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
