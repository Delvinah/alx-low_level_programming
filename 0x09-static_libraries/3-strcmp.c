#include "main.h"
/**
 * _strcmp - compares string values
 * @s1: first input value
 * @s2: second input value
 * Return: difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
