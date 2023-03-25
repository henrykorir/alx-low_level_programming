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
	int x;
	float f;
	const char *p;
	char *s, c;

	va_start(ap, format);
	p = format;
	while (*p)
	{
		if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
		{
			switch (*p)
			{
				case 'c':
					putchar(va_arg(ap, char));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					f = va_arg(ap, float);
					printf("%f", f);
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
