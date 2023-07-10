#include "main.h"
#include<stdlib.h>
/**
 * create_array - Creates an array of a specified size
 * and assigns a specific character to each element.
 * @size: size of the array
 * @c: character to assign to each element
 * Return: A pointer to the created array,
 * returns NULL if the allocation fails or if the size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int l;

	k = malloc(sizeof(char) * size);
	if (size == 0 || k == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		k[l] = c;
	return (k);
}
