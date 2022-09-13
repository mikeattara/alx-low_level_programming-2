#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c;
	int count;

	count = 0;

	while (count <= 9)
	{
		c = 'a';
		while (alpha <= 'z')
		{
			_putchar(c);
			c++;
		}
		count++;
		_putchar('\n');
	}
}
