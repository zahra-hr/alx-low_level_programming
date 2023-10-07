#include <stdio.h>

/**
 * main - Entry point
 * Description: C program to display Alphabet
 * Return: 0
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
