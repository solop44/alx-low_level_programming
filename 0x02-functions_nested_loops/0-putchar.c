#include <stdio.h>
#include "main.h"

/**
 * main - This function prints a string
 * Return: the function retuens zero
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;
	
	while (i < 9)
	{
		_putchar(str[i++]);
	}

	return (0);
}



/**
 * _putchar - This function prints a character
 * Return:No return value
 */
void _putchar(char c)
{
	putchar(c);
}
