#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints the letters of the alphabet
  * Return: Returns an integer value => "0"
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
