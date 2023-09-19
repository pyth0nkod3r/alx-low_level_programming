#include "main.h"
/**
 * print_diagonal - draws diagonal
 * @n: parameter
*/

void print_diagonal(int n)
{
	int count, i;

	count = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count <= n)
		{
			for (i = 0; i < count; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar(10);
			count++;
		}
	}
}