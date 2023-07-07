#include "main.h"
/**
 * _strspn - entry point
 * @s: input value
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s && *s == accept[n])
	{
		n++;
		s++;
	}
	return (n);
}
