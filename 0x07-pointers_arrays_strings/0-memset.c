#include "main.h"

/**
 * _memset - fills n-bytes of mem with a const byte
 * @s: mem area
 * @b: const byte
 * @n: no of bytes
 * Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
