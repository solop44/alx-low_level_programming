#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints the letters of the alphabet
  * Return: Returns an integer value => "0"
*/
int main(void)
{
int i = 0;
while (i < 26)
{
putchar(i + 97);
i++;
}
return (0);
}
