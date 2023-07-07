#include "main.h"

/**
 * _atoi - Converts a string into an integer.
 * @s: The string to convert.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int res = 0;

	while (*s && (*s == ' ' || (*s >= 9 && *s <= 13)))
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s && (*s >= '0' && *s <= '9'))
	{
		res = (res * 10) + (*s - '0');
		s++;
	}
	return (sign * res);
}
