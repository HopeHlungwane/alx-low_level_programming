#include <stdio.h>

/**
 * main - main function that contains my for loop and if statement
 *
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		if (x != 'e' && x != 'q')
			putchar(x);
	putchar('\n');
	return (0);
}
