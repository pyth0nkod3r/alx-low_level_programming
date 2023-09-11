#include <stdio.h>

/**
* main - program start
* Return: Zero
*/


int main(void)
{
int num_x;
for (num_x = 48; num_x <= 57; num_x++)
{
putchar(num_x);
if (num_x <= 56)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
