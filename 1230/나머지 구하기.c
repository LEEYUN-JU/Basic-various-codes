#include <stdio.h>
#include <math.h>

void GetNumber(int *num1, int *num2)
{
	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", num1);
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", num2);
}

void Calculate(int num1, int num2)
{
	float left = (float)num1 / num2;
	printf("%.2f\n", left);
}

void main()
{
	int num1, num2, num3, ������;

	GetNumber(&num1, &num2);
	Calculate(num1, num2);

	printf("�ϳ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num3);
	printf("������ : %d\n", (num3 * num3));


}