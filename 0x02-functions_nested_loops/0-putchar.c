#include "main.h"

/**
 * main - print the word " _putchar"
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char var_p[] = "_putchar"
	
	for (i = 0; i < 8; i++)
	{
		_putchar(var_p[i]);
	}

	_putchar('\n');

	return (0);
}
