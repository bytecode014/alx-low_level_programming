#include "main.h"

/**
 * print_alphabet_x10 - funton that prints alphabets x10
 *
 * Return: Always
 */

void print_alphabet_x10(void)
{
	int i;
	char q;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (q = 'a' ; q <= 'z' ; q++)
			_putchar(q);
		_putchar('\n');
	}
}
