#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	long int n = 612852475143, prime = 2081, max = prime, i;

	do {
		while (n % prime == 0)
		{
			if (prime > max)
				max = prime;
			n /= prime;
		}
		prime = prime + 2;
		for (i = 2; i < prime && prime <= n; i += 1)
		{
			if ((prime % i) == 0)
				prime += 2;
		}
	} while (prime <= n);
	printf("%ld\n", max);

	return (0);
}
