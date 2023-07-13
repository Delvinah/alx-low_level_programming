#include "main.h"
#include<stdlib.h>
#include<stddef.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *k;
	unsigned int a, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		k = malloc(new_size);
		return (k);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	k = malloc(new_size);
	if (k == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (a = 0; a < n; a++)
		k[a] = oldp[a];
	free(ptr);
	return (k);
}
