#include <stdio.h>

/**
* main - program start
* Return: Zero
*/


int main(void)
{
int num_x, num_y;
for (num_x = 0; num_x <= 98; num_x++)
{
for (num_y = num_x + 1; num_y <= 99; num_y++)
{
putchar('0' + num_x / 10);
putchar('0' + num_x % 10);
putchar(32);
putchar('0' + num_y / 10);
putchar('0' + num_y % 10);
if (num_x / 10 != 9 || num_x % 10 != 8)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
