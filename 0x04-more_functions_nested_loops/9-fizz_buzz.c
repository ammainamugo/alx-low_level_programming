#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print out 1 to 100
 * Multiples of 3 prints fizz
 * mutiples of 5 prints buzz
 * multiples of 3 and 5 prints fizzbuzz
 *
 * return: Always 0 Success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Fuzz ");
		} else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
