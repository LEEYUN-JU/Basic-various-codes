#include <stdio.h>
#include <math.h>

void GetNumber(int *num1, int *num2)
{
	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", num1);
	printf("두번째 숫자를 입력하세요 : ");
	scanf_s("%d", num2);
}

void Calculate(int num1, int num2)
{
	float left = (float)num1 / num2;
	printf("%.2f\n", left);
}

void main()
{
	int num1, num2, num3, 제곱수;

	GetNumber(&num1, &num2);
	Calculate(num1, num2);

	printf("하나의 정수를 입력하시오 : ");
	scanf_s("%d", &num3);
	printf("제곱수 : %d\n", (num3 * num3));


}