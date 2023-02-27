#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Prints every other letter in a string
 * @s: string
 * Return: int value
 */
int _atoi(char *s)
{

	if (s[0] == "-")
	{
		return (atoi(s) * -1);
	}
	return (atoi(s));
}
