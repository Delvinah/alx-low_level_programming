#include "main.h"
#include<stddef.h>
/**
 * _strstr - Finds the first occurrence of a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to find
 * Return: A pointer to the first occurrence of the substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *l = haystack;
		char *p = needle;

		while (*l && *p && *l == *p)
		{
			l++;
			p++;
		}

		if (!*p)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
