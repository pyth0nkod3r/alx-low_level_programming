#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive number
 * @argc: cmdline argument counter
 * @argv: cmdline argument variable
 * Return: - Result of multiplication of two numbers or Error and 1 otherwise
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
