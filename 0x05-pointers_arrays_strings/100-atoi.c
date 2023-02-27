#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - Prints every other letter in a string
 * @s: string
 * Return: int value
 */
int _atoi(char *s)
{
	if (atoi(s) == 0)
	{
		char *token = strtok(s, " ");

		while (token != NULL)
		{
			_atoi(token);
		}
	}
	return (atoi(s));
}
