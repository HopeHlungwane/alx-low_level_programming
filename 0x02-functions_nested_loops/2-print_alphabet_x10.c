#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	char x;

	int i;

	i = 0;

	while (i < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}

