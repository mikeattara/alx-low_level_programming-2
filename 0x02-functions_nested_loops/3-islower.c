#include "main.h"
/**
* _islower - A function to check for lowercase alphabet
*
* Return: Always 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
