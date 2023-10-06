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
			if (s[i] == accept[i])
			{
				return (s + 2);
			}
		}
		s++;
	}
	return ('\0');
}