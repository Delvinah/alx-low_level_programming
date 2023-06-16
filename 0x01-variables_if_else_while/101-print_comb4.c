#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, d, e;

	for (b = '0'; b < '9'; b++)
	{
		for (d = b + 1; d <= '9'; d++)
		{
			for (e = d + 1; e <= '9'; e++)
			{
				if ((d != b) != e)
				{
					putchar(b);
				putchar(d);
				putchar(e);
				if (b == '7' && d == '8')
				{
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
}
}
putchar('\n');
return (0);
}
