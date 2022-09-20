#include <stdio.h>
#include "main.h"

/**
* _puts - function that prints a string, followed by a new line, to stdout
* @str: pointer type char
* Return: Always 0 (Success)
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
