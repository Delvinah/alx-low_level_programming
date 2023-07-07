#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination where m,emory is stored
 * @src: where memory is copied from
 * @n: number of bytes
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (dest);
}
