#include <stdio.h>

/**
* main - Entry point
* Return: 0 if exited properly, non-zero otherwise
*/

int main(void)
{
	printf("Size of a char is: %d bytes\n", sizeof(char));
	printf("Size of a int is: %d bytes\n", sizeof(int));
	printf("Size of a long int is: %d bytes\n", sizeof(long int));
	printf("Size of a long long int is: %d bytes\n", sizeof(long long int));
	printf("Size of a float is: %d bytes\n", sizeof(float));
	return (0);
}

