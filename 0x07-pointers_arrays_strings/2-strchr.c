#include "main.h"

/**
* _strchr - locate char in string
* @s: pointer to char param
* @c: char param to be found
* Return: *s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
