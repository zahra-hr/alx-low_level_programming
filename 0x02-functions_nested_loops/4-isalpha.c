#include "main.h"
/**
 * _isalpha - function that checks for alpha
 * @c: parameter
 * Return: 1 if success 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
