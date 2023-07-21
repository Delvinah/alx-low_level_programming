#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *s;
	va_list l;

	va_start(l, format);

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(l, int));
				break;
			case 'i':
				printf("%d", va_arg(l, int));
				break;
			case 'f':
				printf("%f", va_arg(l, double));
				break;
			case 's':
				s = va_arg(l, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				j++;
				continue;
		}
		if (format[j + 1])
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(l);
}
