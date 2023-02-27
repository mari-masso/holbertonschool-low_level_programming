#include "main.h"

/**
 * reset_to_98 - Entry point
 * @n: n is the pointer to p variable
 * Description: Write a function that
 * takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 *
 */

void reset_to_98(int *n)
{
	int p;

	p = 98;
	*n = p;
}
