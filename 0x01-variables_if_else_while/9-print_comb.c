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
		if (i == 9)
		{
			putchar('0' + i);
			i++;
		}
		else
		{
			putchar('0' + i);
			putchar(',');
			putchar(' ');
			i++;
		}
	}
	return (0);
}
