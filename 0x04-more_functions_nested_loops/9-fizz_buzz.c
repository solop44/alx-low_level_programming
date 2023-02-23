#include <stdio.h>

/**
 * main - Print numbers 1 - 100 with some tweaks
 * Return: 0
*/

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
		i++;
	}
	printf("\n");
	return (0);
}
