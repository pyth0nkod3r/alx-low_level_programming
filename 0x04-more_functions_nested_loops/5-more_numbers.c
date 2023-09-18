#include "main.h"
/**
 * more_numbers - prints (0-14)x10
 * Return: 0-14 x10
*/

void more_numbers(void)
{
	int i;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10 + '0'));
			}
		_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
