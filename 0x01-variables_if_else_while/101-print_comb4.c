#include <stdio.h>

/**
* main - program start
* Return: Zero
*/


int main(void)
{
int num_x, num_y, num_z;
for (num_x = 48; num_x <= 57; num_x++)
{
for (num_y = num_x + 1; num_y <= 57; num_y++)
{
for (num_z = num_y + 1; num_z <= 57; num_z++)
{
putchar(num_x);
putchar(num_y);
putchar(num_z);
if (num_x != 55 || num_y != num_x + 1 || num_z != num_y + 1)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
