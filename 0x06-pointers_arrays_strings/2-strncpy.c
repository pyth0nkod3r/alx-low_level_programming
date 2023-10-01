#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - copies a string
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes
 * 
 * Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count]; count++)
	{
		*(dest + count) = *(src + count);
	}
	
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	
	return (dest);
}
