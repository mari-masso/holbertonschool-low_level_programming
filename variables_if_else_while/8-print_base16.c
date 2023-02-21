#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'using for + putchar
 * to print numbers from 0 to 9 consecutively,
 * and then the same functions to print
 * letter from a to f after that, with
 * no space.'
 *
 * Return: 0(Success)
 *
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
