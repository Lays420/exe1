#include <iostream>
#include <cmath>
#include <stdio.h>
#include <windows.h>
int x;
int y;
double a;
double b;
int temp;

using namespace std;

int main()
{
	setlocale(LC_ALL, "polish"); // język

	int wybór;

label1:
	cout << "Wybierz jedną z opcji\n [1] Dodawanie\n [2] Odejmowanie\n [3] Mnożenie\n";
	cout << " [4] Dzielenie\n [5] Potęga\n [6] Pierwiastek\n";
	cout << endl;
	cin >> wybór;
	switch (wybór)
	{
	case 1:
		goto label2;
		label2:
			cout << "Wprowadź pierwszą liczbę" << endl;
		cin >> x;
		cout << "Wprowadź drugą liczbę" << endl;
		cin >> y;
		cout << "Suma podanych liczb wynosi ";
		cout << x + y;
		cout << endl;
		Sleep(2000);
		goto label1;
	case 2:
		goto label3;
	label3:
		cout << "Wprowadź pierwszą liczbę" << endl;
		cin >> x;
		cout << "Wprowadź drugą liczbę" << endl;
		cin >> y;
		cout << "Różnica podanych liczb wynosi ";
		cout << x - y;
		cout << endl;
		Sleep(2000);
		goto label1;
	case 3:
		goto label4;
	label4:
		cout << "Wprowadź pierwszą liczbę" << endl;
		cin >> x;
		cout << "Wprowadź drugą liczbę" << endl;
		cin >> y;
		cout << "Iloczyn podanych liczb wynosi ";
		cout << x * y;
		cout << endl;
		Sleep(2000);
		goto label1;
	case 4:
		goto label5;
	label5:
		cout << "Wprowadź pierwszą liczbę" << endl;
		cin >> a;
		cout << "Wprowadź drugą liczbę" << endl;
		cin >> b;
		cout << "Iloraz podanych liczb wynosi ";
		cout << a / b;
		cout << endl;
		Sleep(2000);
		goto label1;
	case 5:
		goto label6;
	label6:
		cout << "Wprowadź podstawę potęgi" << endl;
		cin >> x;
		cout << "Wprowadź wykładnik potęgi" << endl;
		cin >> y;
		cout << "Potęga podanej liczby wynosi ";
		cout << pow(x, y);
		cout << endl;
		Sleep(2000);
		goto label1;
	case 6:
		goto label7;
	label7:
		cout << "Wprowadź liczbę z której ma być wyciągnięty pierwistek" << endl;
		cin >> x;
		cout << "Pierwistek podanej liczb wynosi ";
		cout << sqrt(x);
		cout << endl;
		Sleep(2000);
		goto label1;
	case 7:
		break;
	}
	return 0;
}