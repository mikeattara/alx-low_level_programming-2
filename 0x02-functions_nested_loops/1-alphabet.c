#include "main.h"
/**
 * print the alphabet, in lowercase 
 *
 * Return: Always 0.
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
