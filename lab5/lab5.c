#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int task1();
int task2();
int task3a();
int task3b();

int main()
{
	setlocale(LC_ALL, "RUS");

	task3b();

	return 0;
}
//Заданаие первое
int task1()
{
	//Объявка переменной
	double gr;
	printf("Введите угол ");
	//Ввод пользователем
	scanf("%lf", &gr);
	
	//Перевод градусов в радианы
	gr = gr * M_PI / 180;
	
	//Вывод синуса угла
	printf("%.6f\n", sin(gr));

	return 0;
}

int task2()
{
	//Вариант 9
	
	//Обявление переменных
	float x, a, b, y;
	int k = 7;

	//Ввод чисел пользователем
	printf("Введите x: ");
	scanf("%f", &x);

	//Счёт переменных a, b и y
	b = log10(fabs(k * x));
	a = pow((k + x), 3);
	y = pow(b, 2) + pow(fabs(a), 0.5);
	printf("Y = %.3f", y);

	return 0;
}

int task3a()
{
	//Объявление переменных
	int a, b;

	//Ввод данных пользователем
	printf("Введите два числа ");
	scanf("%d %d", &a, &b);

	//Проверка условия и вывод
	printf("Условие выполнено (1 - да, 0 - нет) %d", (a%2 + b%2) == 1);

	return 0;
}

int task3b()
{
	//Объявление переменных
	int a, b, c;
	
	//Ввод данных пользователем
	printf("Введите три числа ");
	scanf("%d %d %d", &a, &b, &c);

	//Проверка условия и вывод
	printf("Условие выполнено (1 - да, 0 - нет) %d", ((a % 3) + (b % 3) + (c % 3)) == 0);

	return 0;
}
