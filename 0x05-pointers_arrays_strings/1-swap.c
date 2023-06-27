#include "main.h"

/**
 * swap_int - swaps the value of two pointers
 * @a: pointer one
 * @b: pointer two
 * swap_var: initialize to the value of the first pointer
 */

void swap_int(int *a, int *b)
{
	int swap_var = *a;

	*a = *b;
	*b = swap_var;
}
