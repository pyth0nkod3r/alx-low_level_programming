#include "main.h"

/**
 * _puts_recursion - prints string 
 * @s: parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
