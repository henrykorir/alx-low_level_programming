#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print variadic argument values
 * @separator: values spearator
 * @n: expected number of arguments
 * @...: variadic arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	puts("");
	va_end(ap);
}
