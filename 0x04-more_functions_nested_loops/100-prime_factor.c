#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long long int n = 612852475143, prime = 2, max = prime, i;

	while (prime <= n)
	{
		while ((n % prime) == 0)
		{
			if(prime > max)
				max = prime;
			n /= prime;
		}
		prime++;
		for (i = 2; i < prime && ((i * i) <= prime) && prime <= n; i++)
		{
			if (prime % i == 0)
				prime++;
		}
	}
	printf("%lld\n", max);

	return (0);
}
