#include "main.h"
/**
 * print_square - prints square
 * @size: parameter
*/

void print_square(int size)
{
	int count, mul;

	count = 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (count < size && size != 0)
	{
		for (count = 0; count < size; count++)
		{
			for (mul = 0; mul < size; mul++)
			{
				_putchar('#');
			}
		_putchar('\n');
	}
}
}
