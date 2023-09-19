#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 */

void reset_to_98(int *n)
{
	int i;

	i = 50;
	*n = &i;

	*n = 98;
}
