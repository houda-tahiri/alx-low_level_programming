#include "main.h"

/**
 *print_to_98 - print from the input to 98
 *@n: input
 *Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
}
