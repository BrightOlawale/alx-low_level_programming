#include <stdio.h>

/**
* main - Entry point
* Return: 0 if exited properly, non-zero otherwise
*/

int main(void)
{
	printf("The size of char is: %d bytes\n", sizeof(char));
	printf("The size of int is: %d bytes\n", sizeof(int));
	printf("The size of long int is: %d bytes\n", sizeof(long int));
	printf("The size of long long int is: %d bytes\n", sizeof(long long int));
	printf("The size of float is: %d bytes\n", sizeof(float));
	return (0);
}

