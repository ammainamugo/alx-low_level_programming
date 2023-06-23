#include "main.h"

/**
* main - program entry point
* Return: 0 success
*/

int main(void)
{
	int i=0;

        int positive_or_negative(i);
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }
        return (0);
}
