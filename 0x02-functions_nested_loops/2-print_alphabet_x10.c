#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphab1et
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		c = 'a';
			while (c <= 'z')
			{
				_putchar(c);
				c++;
			}
			_putchar('\n');
			i++;
	}
}
