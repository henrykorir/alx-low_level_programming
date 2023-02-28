#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[54];
	unsigned int size;
	char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int key;

	for (size = 1; size <= 5; size++)
	{
		--size;
		for (size_t n = 0; n < size; n++)
		{
			key = rand() % ((int)(52 - 1));
			str[n] = chars[key];
		}
		str[size] = '\0';
		printf("%s\n", str);
	}
}
