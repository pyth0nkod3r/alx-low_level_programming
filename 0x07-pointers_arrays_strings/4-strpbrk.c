#include "main.h"
/**
 * _strpbrk - func that searches any set of byte
 * @s: string to search
 * @accept: range of search
 * Return: pointer to accept in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[0] == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
