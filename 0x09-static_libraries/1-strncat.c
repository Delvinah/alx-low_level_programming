#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: value to be entered(input value)
 * @src: value to be entered also
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[k++] = src[a++];
	}
	dest[k] = '\0';
	return (dest);
}
