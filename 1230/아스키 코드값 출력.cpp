#include <stdio.h>

void Getword(char *ch1, char *ch2)
{
	printf("���� �ΰ��� �Է��ϼ���. : ");
	scanf("%c %c", ch1, ch2);
}

void Changeword_to_number(char ch1, char ch2)
{
	printf("��ȯ : %d %d\n", ch1, ch2);
}

void main()
{
	char ch1, ch2;

	Getword(&ch1, &ch2);
	Changeword_to_number(ch1, ch2);
}

