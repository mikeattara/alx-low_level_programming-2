#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: int value for memory allocation
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}
