#include <stdio.h>

void GetDate(int *num1)
{
	printf("날수를 입력하세요. ");
	scanf_s("%d", num1);
}

void Calculate(int num1)
{
	int month = 1;
	int date = 0;

	if (num1 <= 31)  {	month = 1;		date = num1; 	}
	if (num1 > 31 && num1 <= 59) { month = 2; date = num1 - 31; } //2
	if (num1 > 59 && num1 <= 90) { month = 3; date = num1 - 59; } //3
	if (num1 > 90 && num1 <= 120) { month = 4; date = num1 - 90; } //4
	if (num1 > 120 && num1 <= 151) { month = 5; date = num1 - 120; } //5
	if (num1 > 151 && num1 <= 181) { month = 6; date = num1 - 151; } //6
	if (num1 > 181 && num1 <= 212) { month = 7; date = num1 - 181; } //7
	if (num1 > 212 && num1 <= 243) { month = 8; date = num1 - 212; } //8
	if (num1 > 243 && num1 <= 273) { month = 9; date = num1 - 243; } //9
	if (num1 > 273 && num1 <= 304) { month = 10; date = num1 - 273; } //10
	if (num1 > 304 && num1 <= 334) { month = 11; date = num1 - 304; } //11
	if (num1 > 334 && num1 <= 365) { month = 12; date = num1 - 334; } //12

	printf("날짜 : %02d월 %02d일\n", month, date);
}

void main()
{
	int num1;
	GetDate(&num1);
	Calculate(num1);
}