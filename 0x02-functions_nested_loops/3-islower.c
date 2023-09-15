#include "main.h"
/**
 * _islower - checks for lower case
 * @c:  input
 * Return: 1 if lowercaser otherwise,
 */
int _islower(int c)
{
c = 64;
if ((c > 97 && c < 123) || (c > 65 && c < 90 ))
{
return (1);
}
return (0);
}
