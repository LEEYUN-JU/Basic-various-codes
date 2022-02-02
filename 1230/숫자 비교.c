#include <stdio.h>

void Getnumber(int *num1, int *num2)
{
	printf("숫자 두개를 입력하세요.");
	scanf_s("%d %d", num1, num2);
}

void Calculate(int num1, int num2)
{
	int num3 = 0;
	
	if (num1 > num2)
	{
		for (int i = num2; i < num1; i++)
		{
			num3 = num3 + i;
		}
		num3 = num3 - num2;
	}

	else if (num2 > num1)
	{
		for (int i = num1; i < num2; i++)
		{
			num3 = num3 + i;
		}
		num3 = num3 - num1;
	}
	
	printf("%d\n", num3);
}

void main()
{
	int num1, num2;

	Getnumber(&num1, &num2);	
	Calculate(num1, num2);
}