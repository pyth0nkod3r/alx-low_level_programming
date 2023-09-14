#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: input
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
int b = 91;
int d = 96;
int e = 123;
int a = 64;
if (c > a && c < b)
{
return(1);
}
else if ( c > d && c < e)
{
return(1);
}
else
{
return(0);
}
}
