#include <stdio.h>

void Getword(char *ch1, char *ch2, char *ch3)
{
	printf("문자 3개를 입력하세요.");
	scanf("%c %c %c", ch1,ch2, ch3);
}

int SearchWord(char ch1, char ch2, char ch3)
{
	int result = 0;

	(ch1 >= 'A' && ch1 <= 'Z') ? result++ : result;
	(ch2 >= 'A' && ch2 <= 'Z') ? result++ : result;
	(ch3 >= 'A' && ch3 <= 'Z') ? result++ : result;

	return result;
}

void main()
{
	char ch1, ch2, ch3;

	Getword(&ch1, &ch2, &ch3);
	int result = SearchWord(ch1, ch2, ch3);

	printf("대문자의 개수 : %d\n", result);
}