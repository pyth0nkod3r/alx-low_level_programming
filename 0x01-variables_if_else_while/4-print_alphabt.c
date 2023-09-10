#include <stdio.h>

/**
* main - program start
* Return: Return 0
*/

int main(void)
{
char x = 97;
while (x < 123)
{
if (x == 101 || x == 113)
{
x++;
continue;
}
putchar(x);
x++;
}
putchar(10);
return (0);
}
