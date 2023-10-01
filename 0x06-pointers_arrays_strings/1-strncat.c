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
	int dest_len, count;

	dest_len = _strlen(dest);
	for (count = 0; count < n; count++)
	{
		dest[dest_len + count] = src[count];
		if (dest[dest_len + count] == '\n')
		{
			break;
		}

	}
	return (dest);
}
