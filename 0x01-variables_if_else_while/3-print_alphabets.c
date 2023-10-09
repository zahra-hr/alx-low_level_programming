#include <stdio.h>
/**
 * main - Entry point
 * Description: A c program to print alphabets upper and lower case
 * Return: 0 if success
*/

int main(void)
{
	char i = 65;

	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	i = i + 6;
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	return (0);
}
