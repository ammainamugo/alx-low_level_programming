#include <stdio.h>

/**
 * main - print out fizz, buzz and fizzbuzz
 * return: Success 0
 */

int main()
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
	return 0;
}
