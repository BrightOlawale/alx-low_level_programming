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
	unsigned int sum = 0, pow = 1, a = 0;

	int i = 0;

	while (b[i] != '\0')
	{
		i++;
	}

	len = i;

	char *rev;
	int n = 0;

	rev = malloc(len + 1);
	while (b[n] != '\0')
	{
		rev[n] = b[len];
		n++;
		len--;
	}

	if (b = NULL)
		return (0);
	if (len == 1 && (rev[a] == '0' || rev[a] == '1')
		return (rev[a] - 48);

	while (rev[a] != '\0')
	{
		if (rev[a] == "1" || rev[a] == "0")
		{
			sum = sum + ((rev[a] - 48) * pow);
		}
		else
			return (0);
		pow *= 2;
		a++;
	}
	return (sum);
}

