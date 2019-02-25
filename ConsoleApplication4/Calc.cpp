// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Comp.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double re, im;
	cout << "Введите действительную часть первого комплексного числа: ";
	cin >> re;
	cout << endl;
	cout << "Введите мнимую часть первого комплексного числа";
	cin >> im;
	Complex a(re, im);
	cout << endl;


	cout << "Введите действительную часть второго комплексного числа";
	cin >> re;
	cout << endl;
	cout << "Введите мнимую часть второго комплексного числа";
	cin >> im;
	cout << endl;
	Complex b(re, im);

	bool correct = false;
	while (!correct) {

		cout << "Введите одну из операций: +, -, *, or /: ";
		char sm;
		cin >> sm;
		cout << endl;

		if (sm == '+') {
			Complex res = a + b;
			res.print();
			correct = true;
		}
		else if (sm == '-') {
			Complex res = a - b;
			res.print();
			correct = true;
		}
		else if (sm == '*') {
			Complex res = a * b;
			res.print();
			correct = true;
		}
		else if (sm == '/') {
			Complex res = a / b;
			res.print();
			correct = true;
		}
	}

	return 0;
	

}


