#include <stdio.h>

void Getword(char *ch1, char *ch2)
{
	printf("문자 두개를 입력하세요. : ");
	scanf("%c %c", ch1, ch2);
}

void Changeword_to_number(char ch1, char ch2)
{
	printf("변환 : %d %d\n", ch1, ch2);
}

void main()
{
	char ch1, ch2;

	Getword(&ch1, &ch2);
	Changeword_to_number(ch1, ch2);
}

