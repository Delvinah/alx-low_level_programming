#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 * Return: 1 on success
 * -1 incase of an error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
