#include <stdio.h>

void modif_my_char_var( char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

int main(void)
{
	char c;
	char *p;

	c = 'H';
	p = &c;
	printf('original char: %c', c);
	printf('original pointer, %p', p);
	modif_my_char_var(c, p);
	printf('modified char: %c', c);
	printf('modified pointer: %c', p);
	return (0);
}