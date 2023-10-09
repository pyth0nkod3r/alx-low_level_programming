#include "main.h"

/**
 * _strspn - gets len of a prefix substr
 * @s: mem segment
 * @accept: accepted bytes
 * Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int count = 0;

while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
			count++;
			break;
		}
		else if (accept[i + 1] == '\0')
		{
			return (count);
		}
	}
	s++;
}
	return (count);
}
