#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts string to integer
 * @s: parameter
 *
 * Return: converted integer
*/

int _atoi(char *s)
{
	int i = 0, j = 1;

	do {
		if (*s == '-')
		{
			j *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			i = i * 10 + (*s - '0');
		}
		else if (i > 0)
		{
			break;
		}

	} while (*s++);
return (i * j);
}
