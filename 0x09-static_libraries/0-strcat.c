#include "main.h"

/**
 * _strcat - This is a function strcat that takes two parameters
 *
 * @dest: the first parameter
 * @src: the second parameter
 *
 * Return: Always a string
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
