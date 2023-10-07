#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD_LENGTH 10
const char password[PASSWORD_LENGTH] = "abc123";

void writePasswordToFile();

int main()
{
	writePasswordToFile();
	return (0);
}


void writePasswordToFile()
{
	int i;

	FILE *file = fopen("crackme2", "wb");
	if (file == NULL)
	{
		printf("Error. Exting..\n");
		exit(1);
	}
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		fputc(password[i], file);
	}
	
	fclose(file);
}
