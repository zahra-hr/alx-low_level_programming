#include <stdio.h>
/**
 * main - Entry point
 * Description: hexa number
 * Return: 0 if success
*/

int main(void)
{
	char i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	i = 97;

	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
