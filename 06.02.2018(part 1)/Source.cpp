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
			/*�������� ������� int f(int m2, int m1, int m0), � �������
			������ �������� ���� ���� ���������� �� ���������.
			��� ������� ��������� � ���������� ����������� �����, ������ (�����), 
			������ (�������) � ������ (�������) ����� �������� ����� ��������������
			m2, m1, m0. 
			��������� ���������� ������� ���, ����� ����� ���������� ��������� x=f() 
			�������� x ��������� 567*/
			system("cls");
			int x;
			x = f1(5,6,7);
			cout << x << endl;
		}
		else if (nz == 2)
		{
			/*�������� ��������� ������� � �����
			������ int f(�) � � ������� �������� ����������.
			����������������� ������ ������������� �������*/
			system("cls");
			f(1);
			f(1, 2);
			f(1, 2, 3);
		}
		else if (nz == 3)
		{
			/*��������� int u=f(3, 4); double v=f(20.5, 10.5);
			myofs<<�u=�<<u<<� v=�<<v<<endl; ���� � ���������� u=7 v=10 (�.�. 
			�������������� ����� � ������������ ����� ����������).
			�������� ������� f(�,�).*/
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
			/*�������� �������
			f(double& a, double& b, double c, double q), �
			������ ���������� ������ �������������� ������������, 
			���������� �������� ����� �, � ������ ���� q (��������)*/
			system("cls");
			double a, b, c = 15.8, q = 28;
			kat(a, b, c, q);
			cout << "Gipotenuza treug = " << c << " cm. Ugol ostrii =  = " << q << " grad. Katet = " << a << "  =  " << b << endl;
		}
		else if (nz == 5)
		{
			/*�������� ������� f(double* a, double* b, double c, double q),
			������� ���������� ������ �������������� ������������,
			���������� �������� ����� �, � ������ ���� q (��������).*/
			system("cls");
			double a, b, c = 13.2, q = 24;
			kat1(&a, &b, c, q);
			cout << "Gipotenuza treug = " << c << " cm. Ugol ostrii = " << q << " grad. Katet = " << a << " = " << b << endl;
		}
		
	}
}