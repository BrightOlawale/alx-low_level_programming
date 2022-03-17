#include "main.h"


/**
* print_alphabet_x10 - print alphabets 10 times
* Return: 0 (success)
*/

void print_alphabet_x10(void)
{
	int times = 0;
	char letter = 'a';

	while (times < 10, times++)
	{
		letter = 'a';
		while (letter < 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n')
	}
}

