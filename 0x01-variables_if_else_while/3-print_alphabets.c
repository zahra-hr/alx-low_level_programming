#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program that print alphabets lowercase
 * Return: 0 (succes)
*/

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;

		putchar(i);
	}
	putchar('\n');
	return (0);
}
