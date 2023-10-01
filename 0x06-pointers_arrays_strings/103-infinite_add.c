#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: num 1
 * @n2: num 2
 * @r: result buffer
 * @size_r: buffer size
 *
 * Return: r or 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, sum, carry;

	for (i = 0; n1[i]; i++)
	;
	for (j = 0; n2[j]; j++)
	;
	i--;
	j--;
	sum = (n1[i] - '0') + (n2[j] - '0');
	if (sum > 9)
	{
		carry = 1;
		sum -= 10;
	}
	else
		carry = 0;
	r[--size_r] = sum + '0';
	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
		{
			sum = (n1[i--] - '0') + (carry);
			carry = (sum > 9) ? 1 : 0;
			sum = sum % 10;
		}
		if (j >= 0)
		{
			sum += n2[j--] - '0';
			carry = (sum > 9) ? 1 : 0;
			sum = sum % 10;
		}
		r[--size_r] = sum + '0';
	}
	if (carry)
		r[--size_r] = '1';
	return (r + size_r);
}
