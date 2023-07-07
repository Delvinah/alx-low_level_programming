#include "main.h"
/**
 * char *_strcpy - copies string pointed by src
 * @dest: destination where string is copied to
 * @src: where string is copied from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
