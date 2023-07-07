#include "main.h"
/**
 * _strlen - returns string length
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
