#include "main.h"
#include<stddef.h>
/**
 * _strchr - starting point(entry point)
 * @s: input value
 * @n: input value
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
