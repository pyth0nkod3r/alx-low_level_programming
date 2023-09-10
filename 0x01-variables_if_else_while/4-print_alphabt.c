#include <stdio.h>

/**
* main - program start
* Return: Return 0
*/

int main(void)
{
char x = 97;
while (x < 122)
{
if (x == 101 || x == 114)
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
