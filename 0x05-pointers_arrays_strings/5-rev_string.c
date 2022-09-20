#include "main.h"
/**
 * rev_string - A function to print a reverse string.
 *
 * @s: this is a parameter to change.
 *
 * Return : Always a success
 */
void rev_string(char *s)
{
	int a = 0, v = 0;
	char t;

	while (s[v] != 0)
		v++;
	v--;

	while (a < v)
	{
		t = s[a];
		s[a] = s[v];
		s[v] = t;
		a++;
		v--;
	}
}
