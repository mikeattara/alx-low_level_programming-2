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
 
srant(time(0));
n = rant() - RAND_MAX / 2;
  /* your codes goes there*/
if if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}

return (0);
}
