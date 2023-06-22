#include "main.h"
/**
 * print_square - prints n square
 * @size: the number of squares or number ot times
 * Return: 0
 */
void print_square(int size)
{
	int x, y;


	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	putchar(35);
	}
putchar('\n');
	}
	}
}
