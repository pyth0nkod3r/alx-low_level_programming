#include "main.h"
/**
 * times_table - prints times table
 * Return: void
*/
void times_table(void)
{
int num1, num2, ans, count;
count = 10;

for (num1 = 0; num1 < count; num1++)
{
for (num2 = 0; num2 < count; num2++)
{
ans = num1 * num2;
if (num2 == 0)
{
_putchar(0 + '0');

}
if (ans < count && num2 != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ans + '0');
}
else if (ans >= count)
{
_putchar(',');
_putchar(' ');
_putchar((ans / 10) + '0');
_putchar((ans % 10) + '0');
}
}
_putchar(10);
}
}
