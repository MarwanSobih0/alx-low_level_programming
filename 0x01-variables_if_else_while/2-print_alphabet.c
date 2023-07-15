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
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alp[i]);
	putchar('\n');
	return (0);
}