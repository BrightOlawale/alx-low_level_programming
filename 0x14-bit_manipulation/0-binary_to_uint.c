#include "main.h"

/**
 * binary_to_uint - covert from binary to unsigned int
 * @b: string of the value to be converted
 * Return: the final conversion
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, power = 1, a = 0, c;
	int i = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
		;
	if (i == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);

	while (b[a] != '\0')
	{
		if (b[a] != '1' && b[a] != '0')
			return (0);
		for (c = (i - 1); c > 0; c--)
			power = power * 2;
		sum = sum + ((b[a] - 48) * power);
		a++;
		i--;
		power = 1;
	}
	return (sum);
}
