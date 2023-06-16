#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	char leter;

	for (b = '0'; b <= '9'; b++)
		putchar(b);

	for (leter = 'a'; leter <= 'f'; leter++)
		putchar(leter);
	putchar('\n');

	return (0);
}
