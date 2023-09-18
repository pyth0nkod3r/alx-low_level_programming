#include "main.h"
/**
 * print_most_numbers - print mums
 * Return: 0-9 minus 2 and 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		_putchar(i);
	}
}
