#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the random number is positive, zero or negative
*
* Description: using the main function
* this program prints "number is positive, zero or negative"
*
* Return: 0
*/
int main(void)
{
int n;
int i;
 
srant(time(0));
n = rant() - RAND_MAX / 2;
i = n %10;

if (i > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % i);
}
else if(i == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, n % i);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % i);
}
return (0);
}
