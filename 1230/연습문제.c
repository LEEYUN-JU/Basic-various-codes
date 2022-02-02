#include <stdio.h>

//void main()
//{
//	int num[11];
//	int big = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("숫자를 입력하세요 : ");
//		scanf_s("%d", &num[i]);
//		big = (num[i] > big) ? num[i] : big;
//	}
//
//	printf("%d\n", big);
//}

void main()
{
	int num[100] = {1};
	int sum = 0;

	for (int i = 1; i < 100; i++)
	{
		num[i] = num[i-1] +1;
		printf("%3d", num[i]);
		if ((num[i]) % 2 == 0)
		{
			sum += num[i];
		}
	}

	printf("%5d\n", sum);
}