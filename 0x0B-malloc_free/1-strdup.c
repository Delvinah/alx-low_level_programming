#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string into a new memory space.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string,
 * returns NULL if memory allocation fails or if str is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		length++;
	}
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
