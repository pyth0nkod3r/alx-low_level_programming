#include "main.h"
/**
* _abs - writes absolute int val
* @i: int type input
* Return: type int
*/

int _abs(int i)
{
if (i > 0)
{
return (i);
}
else if (i == 0)
{
return (-i);
}
i =  -i;
return (i);
}
