#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to write numbers
 * Return: 0 if success
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
