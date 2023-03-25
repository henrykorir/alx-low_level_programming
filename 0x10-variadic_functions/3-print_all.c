#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print all variadic arguments
 * @format: type of the arguments
 * @...: variadic arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *p;
	char *s;

	va_start(ap, format);
	p = format;
	while (*p)
	{
		if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
		{
			switch (*p)
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					while (s != NULL && *s)
					{
						putchar(*s);
						s++;
					}
					break;
			}
			if (*(p + 1) != '\0')
				printf(", ");
		}
		p++;
	}
	va_end(ap);
	puts("");
}
