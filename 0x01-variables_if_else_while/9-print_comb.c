#include <stdio.h>
/**
 * main - Entry point
 * Description: combination of single digits
 * Return: 0 if success
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
