#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'printing the alphabet'
 *
 * Return: 0(Success)
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}
