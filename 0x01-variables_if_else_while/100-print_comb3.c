#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the vaule of n status:
 *		greater than, is zero and is not less than 6.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
