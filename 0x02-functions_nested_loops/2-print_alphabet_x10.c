#include "main.h"
/**
* print_alphabet_x10 - function call
* Return: void
*/

void print_alphabet_x10(void)
{
int a, c;
for (c = 0; c < 10; c++)
{
for (a=97; a < 123; a++)
{
_putchar(a);
}
_putchar(10);
}
}
