#include <stdio.h>
#include "main.h"

/**
 * mul() - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: the product of the two numbers
 */

int mul(int a, int b)
{
	int product;

	product = a * b;
	printf("The Product is: %d\n", product);
	return(0);
}
