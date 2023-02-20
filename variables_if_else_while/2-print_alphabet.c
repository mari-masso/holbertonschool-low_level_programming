#include<stdio.h>
#include<ctype.h>

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
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int tolower(int x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
