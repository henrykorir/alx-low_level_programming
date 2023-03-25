#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print variadic argument values
 * @separator: values spearator
 * @n: expected number of arguments
 * @...: variadic arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		printf("%s", (s != NULL) ? s : ("(nil)"));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	puts("");
}
