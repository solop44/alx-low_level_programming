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
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i == j || (i > 0 && j < i))
{
continue;
}
putchar('0' + i);
putchar('0' + j);
if (i == 8 && j == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
