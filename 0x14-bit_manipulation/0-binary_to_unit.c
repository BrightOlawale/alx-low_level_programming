#include "main.h"

/**
 * binary_to_uint - covert from binary to unsigned int
 * @b: string of the value to be converted
 * Return: the final conversion
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, n = 0;
	char *rev;

	while (b[n] != '\0')
	{
		len++;
	}

	int i = len - 1;

	rev = malloc(len + 1);
	while (b[n] != '\0')
	{
		rev[n] = b[i];
		n++;
		i--;
	}

	unsigned int sum = 0, pow = 0, a;

	for (a = 0; rev[a] != '\0'; a++)
	{
		if (rev[a] == "1" || rev[a] == "0")
		{
			sum += ((rev[a] + 48) * (2, pow);
		}
		else
			return (0);
		pow++;
	}
	return (sum);
}
