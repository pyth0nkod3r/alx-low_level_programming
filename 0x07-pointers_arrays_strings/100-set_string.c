#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer we need to set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
