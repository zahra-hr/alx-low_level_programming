#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to print letters in reverse
 * Return: 0 if success
*/

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
