#include "main.h"
/**
* _atoi - convert ascii to int
*
* @s: string
*
* Return: integer
*/
int _atoi(char *s)
{
	int length = 0, i = 0, found = 0, tenths = 0, sign = 1;
	unsigned int integer = 0;

	while (s[length] != '\0')
		length++;
	i = 0;
	while (i < length)
	{
		if (found == 1)
			tenths = 10;
		else
			tenths = 0;
		if (s[i] >= '0' && s[i] <= '9')
		{
			integer = (integer * tenths) + (s[i] - '0');
			found = 1;
		}
		else
		{
			found = 0;
			if (s[i] == '-')
				sign *= -1;
			else if (s[i] == '+')
				sign *= 1;
		}
		if (found == 0 && integer > 0)
			break;
		i++;
	}
	if (sign < 0)
		return (((int)(integer)) * ((int)sign));
	return (integer *= sign);
}
