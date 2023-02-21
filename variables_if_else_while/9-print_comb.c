#include <stdio.c>

/**
 * main - Entry point
 *
 * Description: 'Printing all posible
 * combinations of single-digit numbers.'
 *
 * Return: 0(Success)
 *
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x >= 48)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
