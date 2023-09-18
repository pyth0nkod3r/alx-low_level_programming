#include "main.h"
/**
 * print_line - draws straight line
 * @n: parameter
 * Return: 0
*/

void print_line(int n)
{
	int num;
	num = 1;
	while (num <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else if (n == num)
		{
			_putchar('_');
		}
		else if (n > num)
		{
			_putchar('_');
		}
	num++;
	}
	_putchar('\n');
}
