#include"main.h"
/**
 * jack_bauer - Printd the minutes
 * from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	unsigned int hour = 0;
	unsigned int minute = 0;

	do {
		_putchar('0' + (hour / 10));
		_putchar('0' + (hour % 10));
		_putchar(':');
		_putchar('0' + (minute / 10));
		_putchar('0' + (minute % 10));
		_putchar('\n');
		minute++;
		if (minute ==  60)
		{
			hour++;
			minute = 0;
		}
	} while (hour <= 23);
}
