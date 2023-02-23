#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 - 9
*/

void print_numbers(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0  && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
		printf("%d", i);
		}
		putchar(' ');
		i++;
	}
	putchar('\n');
}
