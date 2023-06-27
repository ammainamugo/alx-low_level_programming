#include "main.h"

/**
 * swap_int(int *a, int *b) - swaps the value of two pointers
 * @a: pointer one
 * @b: pointer two
 */

void swap_int(int *a, int *b)
{
	int swap_var = *a;

	*a = *b;
	*b = swap_var;
}
