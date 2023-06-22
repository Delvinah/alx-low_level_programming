#include "main.h"
/**
 * more_numbers - prints ten times the number as from 0 to 14
 * Return: returns no value
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				putchar((y / 10) + '0');
			}
			putchar((y % 10) + '0');
		}
		putchar('\n');
	}
}
