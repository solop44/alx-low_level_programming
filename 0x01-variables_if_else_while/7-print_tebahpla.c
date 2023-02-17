#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints the letters of the alphabet
  * Return: Returns an integer value => "0"
*/
int main(void)
{
char i = 'z';
while (i > 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
