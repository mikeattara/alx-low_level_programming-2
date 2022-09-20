#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest : pointer to charater parameter
 * @src : pointer to char parameter
 *
 * @n : int parameter
 *
 * Return: Always *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
