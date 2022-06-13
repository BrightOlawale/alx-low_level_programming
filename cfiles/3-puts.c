#include <stdio.h>
/**
 * _puts - prints a string
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
