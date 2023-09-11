#include <stdio.h>

/**
* main - program start
* Return: Zero
*/


int main(void)
{
int num_x, num_y;
for (num_x = 48; num_x <= 57; num_x++)
{
for (num_y = 57; num_y >= 48; num_y--)
{
putchar(num_x);
putchar(num_y);
if (num_x != 48 || num_y != 57 )
{
putchar(44);
putchar(32);
}
}
putchar(10);
}
return (0);
}
