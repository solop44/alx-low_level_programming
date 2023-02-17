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
if (digit > 5)
{
printf("Last digit of %d is %i and is greater than 5\n/", n, digit);
}
else if (last digit == 0)
{
printf("Last digit of %d is %i and is 0\n/", n, digit);
}
else
{
printf("Last digit of %d is %i and is less than 6 and not 0\n/", n, digit);
}
