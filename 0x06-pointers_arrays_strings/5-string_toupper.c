#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @n: is a pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int k;

	k = 0;
	while (n[k] != '\0')
	{
		if (n[k] >= 'a' && n[k] <= 'z')
			n[k] = n[k] - 32;
		k++;
	}
	return (n);
}