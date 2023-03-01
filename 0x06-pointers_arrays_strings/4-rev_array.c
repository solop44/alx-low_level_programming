#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array.
 *
 * @n: the number of array elements.
 * @a: array
 */

void reverse_array(int *a, int n)
{
	int j, i;
	int v1, v2;

	j = n - 1;
	i = 0;

	while (j > i)
	{
		v1 = a[i];
		v2 = a[j];
		a[i] = v2;
		a[j] = v1;
		j--;
		i++;
	}
}
