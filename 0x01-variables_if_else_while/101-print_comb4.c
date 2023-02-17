#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints double digits
  * Return: Returns an integer value => "0"
*/
int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 10; i++)
{
for (j = 1; j < 9; j++)
{
for (k = 2; k < 10; k++)
{
if (j <= i || k <= j)
{
continue;
}
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i == 7 && j == 8 && k == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
