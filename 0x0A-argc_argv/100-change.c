#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of commands
 * @argv: commands
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{       
        int change, cents = 25, count = 0;
        
        if (argc == 1)
        {       
                puts("Error");
		return (1);
	}
	change = (int)atoi(argv[1]);
	if (change < 0)
	{
		puts("0");
		return (0);
	}
	if ((change / cents) > 0)
	{
		count += change / cents;
		change = change % cents;
		cents = 10;
	}
	if ((change / cents) > 0)
	{
	       	count += change / cents;
                change = change % cents;
                cents = 5;
	}
	if ((change / cents) > 0)
        {
                count += change / cents;
                change = change % cents;
                cents = 1;
        }
	else
		count += change;
	printf("%d\n", count);

	return (0);
}

