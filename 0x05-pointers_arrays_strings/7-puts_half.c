#include "main.h"
#include <stdio.h>

/**
 * puts_half - The function should print the second half of the string.
 *
 * if the number of character is odd, n = (length_of_the_string - 1) / 2
 *
 * @str: input argument
 *
 * Return: Always return success
 */
void puts_half(char *str)
{
	int l, n, i;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	n = (l - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
