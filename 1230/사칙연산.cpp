#include <stdio.h>
#include <conio.h>

void Getnumber(int *num1, int *num2);
void Add(int num1, int num2);
void Delete(int num1, int num2);
void Devide(int num1, int num2);
void Multiple(int num1, int num2);
void Printmenu(int num1, int num2);

void main()
{
	int num1, num2;

	Getnumber(&num1, &num2);
	Printmenu(num1, num2);
}

void Getnumber(int *num1, int *num2)
{
	printf("�� ���ڸ� �Է��ϼ���.");
	scanf_s("%d %d", &num1, &num2);
}

void Add(int num1, int num2) { printf("%d\n", num1 + num2); }
void Delete(int num1, int num2) { printf("%d\n", num1 - num2); }
void Devide(int num1, int num2) { printf("%d\n", num1 * num2); }
void Multiple(int num1, int num2) { printf("%d\n", num1 / num2); }

void Printmenu(int num1, int num2)
{
	printf("�޴��� �����ϼ��� : + - * /\n");
	
	switch (_getch())
	{
	case '+': Add(num1, num2); break;
	case '-': Delete(num1, num2); break;
	case '*': Devide(num1, num2); break;
	case '/': Multiple(num1, num2); break;
	}
}