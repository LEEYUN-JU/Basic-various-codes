#include <stdio.h>

void Getword(char *ch)
{
	printf("ют╥б : ");
	scanf_s("%c", ch);
}

void Search(char ch)
{
	int num = 0;

	if (ch >= 'A' && ch <= 'Z')
		num = 1;
	else if (ch >= 'a' && ch <= 'z')
		num = 2;
	else if (ch >= '0' && ch <= '9')
		num = 3;
	else
		num = 0;

	printf("%d\n", num);
}

void main()
{
	char ch;

	Getword(&ch);
	Search(ch);

	
}