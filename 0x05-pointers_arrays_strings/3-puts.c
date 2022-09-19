#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: Always a string
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
