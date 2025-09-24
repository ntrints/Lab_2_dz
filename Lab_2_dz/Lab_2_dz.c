#include<stdio.h>
#include<locale.h>

float x, y, res;

void main()
{
	setlocale(LC_ALL, "RUS");
	x = 15;
	y = 10;
	res = 1 / (1 / x + 1 / y);
	printf("Первая бригада строит дом за %2.0f дней\nВторая бригада строит дом за %2.0f дней\nДве бригады строят дом за %2.0f дней", x, y, res);

}