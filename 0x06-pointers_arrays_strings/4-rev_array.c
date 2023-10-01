#include "main.h"
#include "2-strlen.c"

/**
 * reverse_array - reverses the content of an array
 * @a: first parameter
 * @n: second parameter
 *
*/
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
