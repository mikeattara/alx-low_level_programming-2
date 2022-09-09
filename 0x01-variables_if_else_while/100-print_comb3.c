#include <stdio.h>

/**
 * main - program that prints the numbers from 01 to 89
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order with 2 digits
 * You can only usethe putchar function
 * Return: 0
 */
int main(void)
{
int num1 = 48;
int num2;
int com = 44;
while (num1 <= 57)
{
n2 = num1 + 1;
while (num2 <= 57)
{
putchar(num1);
putchar(num2);
if (num1 != 56 || num2 != 57)
{
putchar(com);
putchar(32);
}
num2 += 1;
}
num1 += 1;
}
putchar('\n');
return (0);
}
