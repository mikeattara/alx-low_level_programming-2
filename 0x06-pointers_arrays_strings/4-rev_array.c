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
	int i;
	int j;
	int son;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		son = a[i];
		a[i] = a[j];
		a[j] = son;
		i++;
		j--;
	}
}
