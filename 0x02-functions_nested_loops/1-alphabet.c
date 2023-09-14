#include "main.h"
/**
* print_alphabet- program start point
* Return: Void
*/

int print_alphbet(void);

void print_alphabet(void)
{
int n;
n = print_alphbet();
_putchar(n);
}

int print_alphbet(void)
{
int n;
n = 97;
do {
_putchar(n);
n++;
} while(n < 122);
return n;
}
