#include "main.h"
/**
 * print_times_table - prints the multiplication table up to 15
 * @n: integer between 0 and 15
 * Return: Void
 */
void print_times_table(int n)
{
	int num1, num2;

	if (n > 0 && n < 15)
	{
		for (num1 = 0; num1 < (n + 1); num1++)
		{
			for (num2 = 0; num2 < (n + 1); num2++)
			{
				if (num2 == 0)
				{
				_putchar((num1 * num2) + '0');
				}
				else if ((num1 * num2) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((num1 * num2) / 100) + 48);
					_putchar((((num1 * num2) % 100) / 10) + 48);
					_putchar(((num1 * num2) % 10) + 48);
				}
				else if ((num1 * num2) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((num1 * num2) + '0');
				}
				else if ((num1 * num2) >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((num1 * num2) / 10) + 48);
					_putchar(((num1 * num2) % 10) + 48);
				}

			} _putchar('\n');
		}
	}
}
