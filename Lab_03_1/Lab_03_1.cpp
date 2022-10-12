// Lab_03_1.cpp
// Лесюк Оксана
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = "; cin >> x;

	A = 2 * fabs(x - 5);

	// спосіб 1: розгалуження в скороченій формі

	if (x < -1)
		B = (sin(x * x)) / 1 + fabs(cos(x));

	if (-1 <= x && x <= 1)
		B = cos(1 / (fabs(x + 2)) * 1 / (fabs(x + 2)));

	if (x > 1)
		B = log(fabs(x + 2));

	y = A - B;

	cout << "1) y = " << y << endl;


	// спосіб 2: розгалуження в повній формі

	if (x < -1)
		B = (sin(x * x)) / 1 + fabs(cos(x));
	else
		if (x > 1)
			B = log(fabs(x + 2));
		else
			B = cos(1 / (fabs(x + 2)) * 1 / (fabs(x + 2)));

	y = A - B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}

