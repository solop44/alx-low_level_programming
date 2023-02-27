#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - Prints elements from an array
 * @a: array
 * @n: number of elements
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 1)
		{
			break;
		}
		printf("%i", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(",");
		printf(" ");
	}
	printf("\n");
}
