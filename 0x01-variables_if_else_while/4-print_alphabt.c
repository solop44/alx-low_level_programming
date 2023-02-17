#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - A function that prints the letters of the alphabet
  * Return: Returns an integer value => "0"
*/
int main(void)
{
int alpha;
int i = 0;
while (i < 26)
{
alpha = i + 97;
if ((char)alpha == 'e' || (char)alpha == 'q')
{
i++;	
continue;
}
putchar(alpha);
i++;
}
putchar('\n');
return (0);
}
