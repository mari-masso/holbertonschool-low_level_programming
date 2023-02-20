#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'printing the alphabet'
 *
 * Return: 0(Success)
 */

char enterChar(void);

int main(void)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
	return (0);
}
