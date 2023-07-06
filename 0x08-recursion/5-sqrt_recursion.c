#include "main.h"

int rec_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input numner
 *
 * Return: square root of n
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (rec_sqrt_recursion(n, 0));
}

/**
 * rec_sqrt_recursion - recursion function to find natural square
 * root of a number n
 * @n: input number to find square root
 * @i: iterator number
 *
 * Return: square root of n
 */

int rec_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	} else if (i * i == n)
	{
		return (i);
	}
	return (rec_sqrt_recursion(n, i + 1));
}
