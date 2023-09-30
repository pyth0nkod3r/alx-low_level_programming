#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: pointer to string "dest"
*/

char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, count;

	dest_len = _strlen(dest);
	src_len = _strlen(src);
	for (count = 0; count < src_len; count++)
	{
		dest[dest_len + count] = src[count];
	}
	return (dest);
}
