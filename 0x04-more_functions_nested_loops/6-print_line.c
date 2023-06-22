#include "main.h"
/**
 * print_line - draws a straight line
 * @n: the number of lines to be drawn
 * Return: no value
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
