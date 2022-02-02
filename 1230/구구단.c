#include <stdio.h>

void Getnumber(int *num1)
{
	printf("몇 단을 출력할까요?");
	scanf_s("%d", num1);
}

void Calculate(int num1)
{
	int num2 = 0;

	for (int i = 1; i < 10; i++)
	{
		num2 = num1 * i;
		printf("%d * %d = %d\n", num1, i, num2);
	}
}

void main()
{
	int num1;

	Getnumber(&num1);
	Calculate(num1); 
}