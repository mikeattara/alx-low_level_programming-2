#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array of strings representing command line arguments
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	(void)argc;
	return (0);
}
