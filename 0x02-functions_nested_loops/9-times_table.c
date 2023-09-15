#include "main.h"
/**
 * times_table - prints times table
 * Return: void
*/
void times_table(void)
{
int num1, num2, ans;
for(num1 = 0; num1 < 10; num1++)
{
_putchar('0');
for(num2 = 0; num2 < 10; num2++)
{
    _putchar(',');
    _putchar(' ');
ans = num1 * num2;
if (ans < 10)
{
_putchar(' ');
}
_putchar((ans / 10) + '0' );
_putchar((ans % 10) + '0');
}
_putchar('\n');
}
}
