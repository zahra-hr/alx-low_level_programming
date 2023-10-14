#include "main.h"
/**
 * print_number - function to print number
 * @n: parameter
 * Return: void
*/
void print_number(int n)
{
	int i = 0, j, b = 0, c = 0;

	while (n % 10 == 0)
	{
		c++;
		n = n / 10;
	}
	while (n > 0)
	{
		i = n % 10;
		n = n / 10;
		b = (b * 10) + i;
	}
	while (b > 0)
	{
		i = b % 10;
		b = b / 10;
		_putchar('0' + i);
	}
	for (j = 0; j < c; j++)
		_putchar('0');
	_putchar('\n');
}
