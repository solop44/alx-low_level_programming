#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints double digits
  * Return: Returns an integer value => "0"
*/
int main(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 10; j++)
{
if (i == j || (i > 1 && j < i))
{
continue;
}
putchar('0' + i);
putchar('0' + j);
if (i == 9 && j == 8)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
