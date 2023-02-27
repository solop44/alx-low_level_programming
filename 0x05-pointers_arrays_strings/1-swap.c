#include "main.h"
#include <stdio.h>

/**
 * swap_int - Updates the value of a pointer
 * @a: pointer value
 * @b: second pointer value
 * Return: Void
*/
void swap_int(int *a, int *b)
{
	int val = *a;

	*a = *b;
	*b = val;
}
