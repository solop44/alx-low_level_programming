#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints the letters of the alphabet
  * Return: Returns an integer value => "0"
*/
int main(void)
{
int i = 0;
while (i < 10)
{
printf("%i", i);
i++;
}
putchar('\n');
return (0);
}
