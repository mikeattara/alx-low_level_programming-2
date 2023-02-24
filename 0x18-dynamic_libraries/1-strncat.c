#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 *
 * @dest: first parameter
 *
 * @src: second parameter
 *
 * @n: input of max bytes to be used
 * Return: Always a success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
