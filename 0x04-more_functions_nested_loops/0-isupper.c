#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: argument
 * Return: 1 if c is upper, 0 if otherwise
*/

int _isupper(int c)
{
	int d;

	for (d = 65; d < 91; d++)
	{
		if (c == d)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

