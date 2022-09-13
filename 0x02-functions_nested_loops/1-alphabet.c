#include "main.h"
/**
 * print_alphabet - Entry point 
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
