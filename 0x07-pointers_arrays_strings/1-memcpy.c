#include "main.h"

/**
 * _memcpy -copies a memory area
 * @dest: dest mem
 * @src: src mem
 * @n: no of bytes
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
	}
	return (dest);
}
