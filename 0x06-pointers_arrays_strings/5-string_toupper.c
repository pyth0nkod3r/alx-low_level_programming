#include "main.h"

/**
 * string_toupper - converts lowercase string to uppercase
 * @s: parameter
 *
 * Return: uppercase string
*/

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - ('a' - 'A');
		}
		s++;
	}
	return (s);
}
