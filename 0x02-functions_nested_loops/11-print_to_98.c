#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * print_to_98 - prints natural numbers
 * @n: argument
 * Result: outputs natural numbers
*/

void print_to_98(int n)
{
if (n == 98)
{
printf("%i\n", n);
}
else
{
while (true)
{
if (n > 98)
{
printf("%i, ", n);
n--;
}
else if (n < 98)
{
printf("%i, ", n);
n++;
}
else
{
printf("%i, ", n);
break;
}  
}
}
}