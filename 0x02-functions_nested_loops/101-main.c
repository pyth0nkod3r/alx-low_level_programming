#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: zero
 */
int main(void)
{
	int num, r;

	num = 1024;
	r = sum_of_multiples_3_and_5(num);
	printf("%d\n", r);
	return (0);
}