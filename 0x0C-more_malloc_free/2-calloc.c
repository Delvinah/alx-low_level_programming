#include "main.h"
#include<stdlib.h>
/**
 * _memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy b
 * Return: pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements in an array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == NULL)
		return (NULL);
	_memset(m, 0, nmemb * size);
	return (m);
}
