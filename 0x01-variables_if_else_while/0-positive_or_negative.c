#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - A function that prints if an integer is positive or negative
 * Return: Returns an integer value => "0"
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
{
printf("%s is negative\n", n);	
}
else if(n > 0)
{
printf("%s is positive\n", n);	
}
else
{
printf("%s is zero\n", n);	
}
return (0);
}
