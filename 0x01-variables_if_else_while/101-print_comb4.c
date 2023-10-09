#include <stdio.h>
/**
 * main - Entry point
 * Description: a C program to print combinations
 * Return: 0
*/

int main(void)
{
	int i, j, d;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (d = 2; d <= 9; d++)
			{
				if (i < j && j < d)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + d);
					if (i != 7 || j != 8 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
