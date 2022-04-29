#include "main.h"
unsigned int len(const char *b);
char *reverse(const char *b);

/**
 * binary_to_uint - covert from binary to unsigned int
 * @b: string of the value to be converted
 * Return: the final conversion
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, pow = 0, a;

	rev = reverse(b);
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

unsigned int len(const char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *reverse(const char *b)
{
	char *rev;
	int i, n = 0;

	i = len(b);
	rev = malloc(len + 1);
	while (b[n] != '\0')
	{
		rev[n] = b[i];
		n++;
		i--;
	}
	return (rev);
}
