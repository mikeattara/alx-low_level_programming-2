#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte
  * @s: memory area ponited to
  * @b: constant byte to fill
  * @n: first memory area to be filled
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
