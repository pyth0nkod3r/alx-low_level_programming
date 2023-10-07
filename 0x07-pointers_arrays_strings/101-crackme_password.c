#include <stdio.h>

int main()
{
	char password[] = "abc123";
	
	FILE *file = fopen("101-crackme_password", "w");
	fprintf(file, "%s", password);
	fclose(file);
	return (0);
}