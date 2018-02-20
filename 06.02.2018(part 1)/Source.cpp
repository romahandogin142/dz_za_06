#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "vizov.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int i, j;
	while (true)
	{
		cout << "Vedite nomer zd  ";
		cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*Напишите функцию int f(int m2, int m1, int m0), в которой
			заданы значения всех трех параметров по умолчанию.
			Это функция вычисляет и возвращает натуральное число, первая (сотни), 
			вторая (десятки) и третья (единицы) цифры которого равны соответственно
			m2, m1, m0. 
			Требуется определить функцию так, чтобы после выполнения оператора x=f() 
			значение x равнялось 567*/
			system("cls");
			int x;
			x = f1(5,6,7);
			cout << x << endl;
		}
		else if (nz == 2)
		{
			/*Напишите несколько функций с одним
			именем int f(…) и с разными наборами параметров.
			Продемонстрируйте работу перегруженных функций*/
			system("cls");
			f(1);
			f(1, 2);
			f(1, 2, 3);
		}
		else if (nz == 3)
		{
			/*Операторы int u=f(3, 4); double v=f(20.5, 10.5);
			myofs<<”u=”<<u<<” v=”<<v<<endl; дают в результате u=7 v=10 (т.е. 
			соответственно сумму и произведение своих параметров).
			Напишите функции f(…,…).*/
			system("cls");
			int a, b, u;
			double a1, b1, v;
			a = 1 + rand() % 99;
			b = 1 + rand() % 99;
			//Pandom
			a1 = (1.7 + rand() % 99) / (1.2 + rand() % 99);
			b1 = (1.3 + rand() % 99)/ (1.4 + rand() % 99);

			cout << "Chislo a = "<<a<<"\t";
			cout << "Chislo b = " << b << "\t";
			cout << "Chislo a1 = " << a1 << "\t";
			cout << "Chislo b1 = " << b1 << endl;
			
			u = sum(a, b);
			v = razn(a1, b1);
			cout << "u = " << u << " v = " << v << endl;
		}
		else if (nz == 4)
		{
			/*Напишите функцию
			f(double& a, double& b, double c, double q), к
			оторая возвращает катеты прямоугольного треугольника, 
			гипотенуза которого равна с, а острый угол q (градусов)*/
			system("cls");
			double a, b, c = 15.8, q = 28;
			kat(a, b, c, q);
			cout << "Gipotenuza treug = " << c << " cm. Ugol ostrii =  = " << q << " grad. Katet = " << a << "  =  " << b << endl;
		}
		else if (nz == 5)
		{
			/*Напишите функцию f(double* a, double* b, double c, double q),
			которая возвращает катеты прямоугольного треугольника,
			гипотенуза которого равна с, а острый угол q (градусов).*/
			system("cls");
			double a, b, c = 13.2, q = 24;
			kat1(&a, &b, c, q);
			cout << "Gipotenuza treug = " << c << " cm. Ugol ostrii = " << q << " grad. Katet = " << a << " = " << b << endl;
		}
		
	}
}