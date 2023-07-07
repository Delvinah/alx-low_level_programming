#include "main.h"
/**
 * memset - fills a block of memory with a specific value
 * @s: starting address of the memory to be filled
 * @b: the desired value
 * @n: number f bytes to be changed
 * Return: changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
