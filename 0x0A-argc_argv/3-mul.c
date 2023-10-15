#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: cmdline argument counter
 * @argv: cmdline argument variable
 * Return: - Result of multiplication of two numbers or Error and 1 otherwise
*/

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc - 1  != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
