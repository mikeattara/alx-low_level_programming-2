#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  a function that reverses the content of an array of integers
 *
 * @a: poiter to int parameter
 * @n: pointer to int parametr
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
