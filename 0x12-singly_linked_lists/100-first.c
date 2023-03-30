#include <stdio.h>

/**
 * before_main - prints a string before main() is called
 */
void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

