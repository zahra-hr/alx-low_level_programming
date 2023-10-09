#include <stdio.h>
/**
 * main - Entry point
 * Description: A c program to print alphabets upper and lower case
 * Return: 0 if success
*/

int main(void)
{
	char i = 97;

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
