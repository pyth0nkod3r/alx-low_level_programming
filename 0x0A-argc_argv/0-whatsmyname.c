#include <stdio.h>

/**
 * main - entry point of program
 * @argc: cmdline argument counter
 * @argv: cmdline argument variable
 * Return: - 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
