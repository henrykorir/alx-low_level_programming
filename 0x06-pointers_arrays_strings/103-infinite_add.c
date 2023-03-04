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
	int i = 0, a = 0, b = 0, c = 0;
	int k1 = 0, k2 = 0, n = 0;

	for (; i < size_r; i++)
		r[i] = '\0';
	while (n1[k1] != '\0')
		k1++;
	while (n2[k2] != '\0')
		k2++;
	n = (k1 >= k2 ? k1 : k2) + 1;
	if (n <= size_r && size_r >= 0)
	{
		size_r -= 2;
		while ((--n) >= 0 && size_r >= 0)
		{
			k1--;
			k2--;
			if (k1 < 0)
				a = 0;
			if (k2 < 0)
				b = 0;
			if (k1 >= 0 && k2 >= 0)
			{
				a = n1[k1] - '0';
				b = n2[k2] - '0';
			}
			if (size_r == 0 && (a + b + c) > 9)
				return (0);
			r[size_r--] = '0' + ((a + b + c) % 10);
			c = (a + b + c) / 10;
		}
		if ((++size_r)  > 0 && r[size_r] == '0')
			size_r++;
		i = 0;
		while ((r[i] = r[size_r++]) != '\0')
			i++;
	}
	else
		return (0);
	return (r);
}

