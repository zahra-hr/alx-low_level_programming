#include <stdio.h>
/**
 * main - Entry point
 * Description: a C program to print combinations
 * Return: 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
