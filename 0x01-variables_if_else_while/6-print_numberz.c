#include <stdio.h>
/**
 *main -  Entry point
 *Description: 'print number of base 10 using putchar'
 *Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');

	return (0);
}
