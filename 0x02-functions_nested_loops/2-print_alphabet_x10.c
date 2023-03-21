#include "main.h"
/**
 * print_alphabet_x10 - lowercase ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int n;

	while (i < 10)
	{
		for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);
		_putchar('\n');
		i++;
	}
}
