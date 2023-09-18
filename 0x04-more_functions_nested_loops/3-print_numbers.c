#include "main.h"
/**
 * print_numbers - prints numbers 0 through 9
 * Return: 0 - 9
*/

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar(10);
}
