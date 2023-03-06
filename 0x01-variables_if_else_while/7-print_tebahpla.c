#include <stdio.h>

/**
  * main - Prints the lowercase alphabet in reverse.
  * followed by a new line
  * Return: Always 0 (success)
*/
int main(void)
{
char i = 'z';
while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
