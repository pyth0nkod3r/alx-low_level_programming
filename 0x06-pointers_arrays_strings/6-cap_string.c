#include "main.h"

/**
 * cap_string - Capitalizes all words in string
 * @s: parameter
 *
 * Return: Capitalized string
*/

char *cap_string(char *s)
{
	int c = 0;
	int nxt = 1;

	while (s[c] != '\0')
	{
		if (nxt && s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] -= 32;
		}
		if (s[c] == ',' ||
			s[c] == ';' ||
			s[c] == '.' ||
			s[c] == '!' ||
			s[c] == '?' ||
			s[c] == '"' ||
			s[c] == '(' ||
			s[c] == ')' ||
			s[c] == '}' ||
			s[c] == '{' ||
			s[c] == '\n' ||
			s[c] ==  ' ' ||
			s[c] == '\t')
		{
			nxt = 1;
		}
		else
		{
			nxt = 0;
		}
		c++;
	}
	return (s);
}
