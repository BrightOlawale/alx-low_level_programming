/**
* _islower - checks for lowercase
* @c: converted to ascii
* Return: 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
