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
	printf("Size of a char : %d", sizeof(char));
	printf("Size of an int : %d", sizeof(int));
	printf("Size of a long int : %d", sizeof(long));
	printf("Size of a long long int : %d", sizeof(long long));
	printf("Size of a float : %d",  sizeof(float));

	return (0);
}
