# Lab_2_dz

Домашняя работа к лабораторной работе №2

# Условие задачи
О двух бригадах стороителей известно, что первая бригада может построить дом за X дней, а вторая за Y дней при одинаковом колличестве. Определите сколько дней потребуется для строительства этого дома двум бригадам вместе. 

# Блоксхема

<img width="156" height="561" alt="Блоксхема drawio" src="https://github.com/user-attachments/assets/7d6d4e6e-cd6e-43a6-8130-6be17d3507b7" />

# Реализация программы

#include<stdio.h>
#include<locale.h>

float x, y, res;

void main()
{
	setlocale(LC_ALL, "RUS");
	x = 15;
	y = 10;
	res = 1 / (1 / x + 1/y);
	printf("Первая бригада строит дом за %2.0f дней\nВторая бригада строит дом за %2.0f дней\nДве бригады строят дом за %2.0f дней", x, y, res);

}

# Результат программы

<img width="1111" height="642" alt="image" src="https://github.com/user-attachments/assets/f2062ba9-ffd8-4f06-bb7a-102e7bba9793" />

