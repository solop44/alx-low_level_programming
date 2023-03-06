#include <stdio.h>

/**
  * main - Prints numbers between 0 to 9 and letters from a to f.
  *
  * Return: Always 0 (success)
*/
int main(void)
{
int j = 97;
int i = 0;
while (i < 10)
{
putchar('0' + i);
i++;
}
while (j < 103)
{
putchar((char) j);
j++;
}
putchar('\n');
return (0);
}
