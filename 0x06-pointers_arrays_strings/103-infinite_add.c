#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: num 1
 * @n2: num 2
 * @r: result buffer
 * @size_r: buffer size
 * Return: r or 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i, j, k, carry, left, right;

	/* Check if the result can fit in the buffer */
	if (len1 + len2 >= size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	carry = 0;
	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
		i--;
		j--;
	}
	r[k] = '\0';
	/* Reverse the result string */
	left = 0;
	right = k - 1;
	while (left < right)
	{
		char temp = r[left];

		r[left] = r[right];
		r[right] = temp;
		left++;
		right--;
	}
	return (r);
}
