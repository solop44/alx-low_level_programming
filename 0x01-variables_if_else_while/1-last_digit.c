#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - A function that prints the last value of an integer
  * Return: Returns an integer value => "0"
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int digit = n % 10;
char *str;
if (digit > 5)
{
str = "greater than 5";
}
else if (digit == 0)
{
str = "0";
}
else
{
str = "less than 6 and not 0";
}
printf("Last digit of %d is %i and is %s\n", n, digit, str);
}
