#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, m, r = 0, l = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{

		for (m = 0; av[i][m]; m++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)

	{
	for (m = 0; av[i][m]; m++)

	{
		str[r] = av[i][m];
		r++;
	}
	if (str[r] == '\0')

	{

		str[r++] = '\n';

	}

	}

	return (str);

}


