#include "main.h"

/**
 * main - swap_int
 * @a: pointer
 *
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
