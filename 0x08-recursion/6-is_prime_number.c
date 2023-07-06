#include "main.h"

int recu_prime(int n, int i);

/**
 * is_prime_number - if the input integer is a prime number
 * @n: input number
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (recu_prime(n, n - 1));
}

/**
 * rec_ prime - check if the number is prime
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if prime otherwise 0
 */

int recu_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (recu_prime(n, n - 1));
}
