#include <stdio.h>

/**
  * main - Prints numbers from 0 to 9.
  *
  * Return: Always 0 (success)
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar('0' + i);
i++;
}
putchar('\n');
return (0);
}
