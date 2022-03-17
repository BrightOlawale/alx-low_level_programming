#include "main.h"

/**
* _isalpha - checks if letter is lowercase
* @c: converts to ascii
* Return: 1 if lower case
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
