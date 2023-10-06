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
	int count;
	
while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (s[i] == accept[i])
		{
			count++;
		}
	}
	s++;
}
	return (count);
}
