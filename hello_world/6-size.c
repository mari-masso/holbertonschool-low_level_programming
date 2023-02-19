#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Printing the size of different types of data'
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("Size of a char : %d bytes(s)\n", sizeof(char));
	printf("Size of an int : %d bytes(s)\n", sizeof(int));
	printf("Size of a long int : %d bytes(s)\n", sizeof(long));
	printf("Size of a long long int : %d bytes(s)\n", sizeof(long long));
	printf("Size of a float : %d bytes(s)\n",  sizeof(float));

	return (0);
}
