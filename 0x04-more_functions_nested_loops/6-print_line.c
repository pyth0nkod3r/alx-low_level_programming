#include "main.h"
/**
 * print_line - draws straight line
 * @n: parameter
 * Return: 0
*/

void print_line(int n)
{
	int num;

	for (num = 0; num <= n; num++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
