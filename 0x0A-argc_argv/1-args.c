#include <stdio.h>

/**
 * main - entry point of program
 * @argc: cmdline argument counter
 * @argv: cmdline argument variable
 * Return: - 0
*/

int main(int argc, char *argv[])
{
	if (argv)
	{
		argc -= 1;
		printf("%d\n", argc);
	}
	return (0);
}
