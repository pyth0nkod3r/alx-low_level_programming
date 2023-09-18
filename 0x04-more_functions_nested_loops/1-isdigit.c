#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: parameter
 * Return: 1 if digit, 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 47) && (c <= 53))
	{
		return (1);
	}
	return (0);
}
