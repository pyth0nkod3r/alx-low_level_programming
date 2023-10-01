#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes
 *
 * Return: pointer to @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, count = 0;

	dest_len = _strlen(dest);
	for (; count < n; count++)
	{
		dest[dest_len + count] = src[count];
		if (dest[dest_len + count] == '\0')
		{
			break;
		}

	}
	return (dest);
}
