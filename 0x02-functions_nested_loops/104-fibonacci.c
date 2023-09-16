#include <stdio.h>

/**
 * main - function
 * @n: parameter
 * Return: 0
 */

void fibonacci(int n);

int main(void)
{
	unsigned long int n = 98;

	fibonacci(n);
	return (0);
}


/**
 * fibonacci - fibonacci
 * @n: input
 */

void fibonacci(int n)
{
	unsigned long int i, first = 1, second = 2, next;

	printf("%lu, %lu, ", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;

		printf("%lu", next);

		if (i != n)
		{
			printf(", ");
		}

		first = second;
		second = next;
	} printf("\n");
}
