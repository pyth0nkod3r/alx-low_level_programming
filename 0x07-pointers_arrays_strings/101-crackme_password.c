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
	FILE *file = fopen("password.txt", "w");
	if (file == NULL)
	{
		printf("Error. Exting..\n");
		exit(1);
	}
	fwrite(password, sizeof(char), PASSWORD_LENGTH, file);
	fclose(file);
}


