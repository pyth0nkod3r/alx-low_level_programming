#include "main.h"
#include "2-strlen.c"

/**
 * *_strcpy - copies string in src to dest
 * @dest: destination parameter
 * @src: source parameter
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i < _strlen(src) + 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
