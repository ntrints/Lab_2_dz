#include<stdio.h>
#include<locale.h>

float x, y, res;

void main()
{
	setlocale(LC_ALL, "RUS");
	x = 15;
	y = 10;
	res = 1 / (1 / x + 1 / y);
	printf("������ ������� ������ ��� �� %2.0f ����\n������ ������� ������ ��� �� %2.0f ����\n��� ������� ������ ��� �� %2.0f ����", x, y, res);

}