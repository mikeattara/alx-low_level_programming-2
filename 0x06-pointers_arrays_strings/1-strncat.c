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
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
