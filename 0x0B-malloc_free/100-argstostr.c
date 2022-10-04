#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all arguments of program
 *
 * @ac: argument count
 * @av: point to pointer to arguments
 * Return: pointer to new string or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			;
			size ++;
			j++;
		}
		size++;
		i++;
	}
	agr = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][k])
		{
			arg[k] = av[i][k];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
