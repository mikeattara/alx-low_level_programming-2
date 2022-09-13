#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: is the int that will be used for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c >= 122)
	{
		return (1);
	}
	else
		return (0);
}
