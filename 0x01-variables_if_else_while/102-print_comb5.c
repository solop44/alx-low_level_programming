#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints double digits
  * Return: Returns an integer value => "0"
*/
int main(void)
{
int i, j;
putchar('\n');
for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
