#include <stdio.h>

void main()
{
	int num[1];
	char ch;

	for (int i = 0; i < 1; i++)
	{
		printf("점수를 입력하세요.");
		scanf_s("%d", &num[i]);
		if (num[i] <= 60)	{	ch = 'F';	}
		else if (num[i] > 60 && num[i] <= 70) { ch = 'D'; }
		else if (num[i] > 70 && num[i] <= 80) { ch = 'C'; }
		else if (num[i] > 80 && num[i] <= 90) { ch = 'B'; }
		else if (num[i] > 90 && num[i] <= 100) { ch = 'A'; }
	}

	printf("%c", ch);
}