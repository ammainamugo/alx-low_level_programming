#include "main.h"

/*
 * main() - print num 0 to 9
 * skips 2 and 4
 * @i: value of i
 */

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
	if (i != 2 && i != 4)
	{
		_putchar(i + '0');
	}
}
_putchar('\n');
}
