#include "main.h"

/**
* _memcpy - copy mem area
* @dest: pointer to char param
* @scr: pointer to param
* @n: size
* Return: *dest
*/

char *_memcpy(char *dest, char *scr, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = scr[i];
	}
	return (dest);
}
