#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	long int n = 612852475143, prime = 2, max = prime, i;

	do {
		while (n % prime == 0)
		{
			if (prime > max)
				max = prime;
			n /= prime;
		}
		if (prime == 2)
			prime = 3;
		else
		{
			prime = prime + 1;
			for (i = 2; i < prime && prime <= n; i += 1)
			{
				if ((prime % i) == 0)
					prime += 1;
			}
		}
	} while (prime <= n);
	printf("%ld\n", max);

	return (0);
}
