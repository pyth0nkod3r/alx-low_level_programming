#include "main.h"
/**
 * _islower - checks for lower case
 * @c:  input
 * Return: 1 if lowercaser otherwise,
 */
int _islower(int c)
{
c = 96;
if (c > 97 && c < 123)
{
return (1);
}
return (0);
}