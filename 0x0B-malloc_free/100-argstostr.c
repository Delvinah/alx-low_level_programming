#include "main.h"
#include<stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer input
 * @av: double pointer array
 * Return: 0 on success
 */
char *argstostr(int ac, char **av)
{
	int f = 0, b = 0, g = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (b < ac)
	{
		while (av[b][g])
		{
			f++;
			g++;
		}
		g = 0;
		b++;
	}
	s = malloc((sizeof(char) * f) + ac + 1);
	b = 0;
	while (av[b])
	{
		while (av[b][g])
		{
			s[d] = av[b][g];
			d++;
			g++;
		}
		s[d] = '\n';
		g = 0;
		d++;
		b++;
	}
	d++;
	s[d] = '\0';
	return (s);
}
