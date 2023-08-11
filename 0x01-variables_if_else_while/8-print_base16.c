#include <stdio.h>

/**
 * main - main function that prints hexadecimal numbers in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char y;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (y = 'a' ; y <= 'f' ; y++)
		putchar(y);
	putchar('\n');
	return(0);
}
