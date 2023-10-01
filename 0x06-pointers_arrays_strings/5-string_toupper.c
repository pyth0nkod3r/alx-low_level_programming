#include "main.h"

/**
 * string_toupper - converts lowercase string to uppercase
 * @s: parameter
 *
 * Return: uppercase string
*/

char *string_toupper(char *s)
{
	int c = 0;
	while (s[c] != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - ('a' - 'A');
		}
		c++;
	}
	return (s);
}
