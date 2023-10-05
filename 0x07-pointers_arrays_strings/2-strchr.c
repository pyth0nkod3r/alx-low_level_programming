#include "main.h"

/**
 * _strchr - locates a char in a str
 * @s: containing str
 * @c: char to find
 * Return: pointer to c or NULL
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else if (!c)
		{
			return ('\0');
		}
	}
	return ('\0');
}
