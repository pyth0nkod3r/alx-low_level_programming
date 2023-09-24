#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: takes pointer of char type as input
 * Return: Integer
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}