#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1:string to append to
 * @s2: string to concatenate from
 * @n: number of bytes concatenated from s2 to s1
 * Return: conatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
		unsigned int i = 0, j = 0, k = 0, l = 0;

		while (s1 && s1[k])
			k++;
		while (s2 && s2[l])
			l++;
		if (n < l)
			t = malloc(sizeof(char) * (k + n + 1));
		else
			t = malloc(sizeof(char) * (k + l + 1));
		if (!t)
			return (NULL);
		while (i < k)
		{
			t[i] = s1[i];
			i++;
		}
		while (n < l && i < (k + n))
			t[i++] = s2[j++];

		while (n >= l && i < (k + l))
			t[i++] = s2[j++];
		t[i] = '\0';
		return (t);
}
