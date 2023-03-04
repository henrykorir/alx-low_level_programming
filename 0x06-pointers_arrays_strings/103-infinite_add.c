#include "main.h"

/**
 * infinite_add - does big integer sum
 *
 * @n1: first big integer
 * @n2: second big integer
 * @r: buffer to store result
 * @size_r: size of the buffer
 *
 * Return: result of summation
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, a = 0, b = 0, c = 0, sum_ab = 0;
	int k = size_r, k1 = 0, k2 = 0, n = 0;

	for (; i < size_r; i++)
		r[i] = '0';
	while (n1[k1] != '\0')
		k1++;
	while (n2[k2] != '\0')
		k2++;
	n = k1 >= k2 ? k1 : k2;
	if ((n + 1) <= k && k > 0)
	{
		r[--k] = '\0';
		k--;
		while ((n--) >= 0)
		{
			k1--;
			k2--;
			if (k1 < 0)
				a = 0;
			if (k2 < 0)
				b = 0;
			if (k1 < 0 && k2 < 0)
				a = b = 0;
			if (k1 >= 0 && k2 >= 0)
			{
				a = n1[k1] - '0';
				b = n2[k2] - '0';
			}
			if (k == 0 && (a + b + c) > 9)
				return (0);
			r[k--] = '0' + ((a + b + c) % 10);
			c = (a + b + c) / 10;
		}
		i = 0;
		while ((r[i++] = r[++k]) != '\0')
			;
	}
	else
		return (0);
	return (r);
}
