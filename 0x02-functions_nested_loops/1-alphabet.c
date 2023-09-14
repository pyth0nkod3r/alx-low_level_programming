#include "main.h"
#include <stdio.h>
/**
* print_alphabet - program start point
* Return: Void
*/

int print_alphbet(void);

void print_alphabet(void)
{
int n;
for (n=97; n < 123; n++)
{
putchar(n);
}
putchar(32);
}
