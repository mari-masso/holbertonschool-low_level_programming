#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 *
 * Description: 'print alphabet in lowercases with for,
 * and next to it the alphabet in uppercases.'
 *
 * Return: 0(Success)
 *
 */


int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

