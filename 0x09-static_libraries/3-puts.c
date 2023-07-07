#include "main.h"
/**
 * _puts - prints string followed by a new line
 * @s: string to  print
 * Return: no value
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
