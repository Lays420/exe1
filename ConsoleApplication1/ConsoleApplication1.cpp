#include <iostream>
#include <cmath>
#ubclude <ncurses>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int x, y;
double a, b;

using namespace std;

int main()
{
	setlocale(LC_ALL, "polish"); // język

	int wybór;

label1:
	cout << "Wybierz jedną z opcji\n";
	Sleep(250);
	cout << "[1] Dodawanie(+)\n";
	Sleep(250);
	cout << "[2] Odejmowanie(-)\n";
	Sleep(250);
	cout << "[3] Mnożenie\n(*)";
	Sleep(250);
	cout << "[4] Dzielenie\n(/)";
	Sleep(250);
	cout << "[5] Potęga\n(pow)";
	Sleep(250);
	cout << "[6] Pierwiastek\n(sqrt)";
	Sleep(250);
	cout << "[7] Silnia\n(!)";
	Sleep(250);
	cout << "[8] Wyczyść ekran\n";
	Sleep(250);
	cout << "[9] Opuść\n";
	Sleep(250);
	cout << endl;
	cin >> wybór;
	cout << endl;
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
		Sleep(1500);
		cout << x + y;
		cout << endl;
		Sleep(1900);
		cout << endl;
		goto label1;
	case 2:
		goto label3;
	label3:
		cout << "Wprowadź pierwszą liczbę" << endl;
		cin >> x;
		cout << "Wprowadź drugą liczbę" << endl;
		cin >> y;
		cout << "Różnica podanych liczb wynosi ";
		Sleep(1500);
		cout << x - y;
		cout << endl;
		Sleep(1700);
		cout << endl;
		goto label1;
	case 3:
		goto label4;
	label4:
		cout << "Wprowadź pierwszą liczbę" << endl;
		cin >> x;
		cout << "Wprowadź drugą liczbę" << endl;
		cin >> y;
		cout << "Iloczyn podanych liczb wynosi ";
		Sleep(1500);
		cout << x * y;
		cout << endl;
		Sleep(1700);
		cout << endl;
		goto label1;
	case 4:
		goto label5;
	label5:
		cout << "Wprowadź pierwszą liczbę" << endl;
		cin >> a;
		cout << "Wprowadź drugą liczbę" << endl;
		cin >> b;
		while (b == '.');
		{
			if (b == 0)
			{
				cout << "Wprowadź liczbę różną od zera";
				cout << endl;
				Sleep(2000);
				goto label5;
			}
			else {};
		}
		cout << "Iloraz podanych liczb wynosi ";
		Sleep(1500);
		cout << a / b;
		cout << endl;
		Sleep(1700);
		cout << endl;
		goto label1;
	case 5:
		goto label6;
	label6:
		cout << "Wprowadź podstawę potęgi" << endl;
		cin >> x;
		cout << "Wprowadź wykładnik potęgi" << endl;
		cin >> y;
		cout << "Potęga podanej liczby wynosi ";
		Sleep(1500);
		cout << pow(x, y);
		cout << endl;
		Sleep(1700);
		cout << endl;
		goto label1;
	case 6:
		goto label7;
	label7:
		cout << "Wprowadź liczbę z której ma zostać wyciągnięty pierwistek" << endl;
		cin >> x;
		while (x == '.');
		{
			if (x <= 0)
			{
				cout << "Wprowadź liczbę większą od zera";
				cout << endl;
				Sleep(2000);
				goto label7;
			}
			else {};
		}
		cout << "Pierwistek podanej liczb wynosi ";
		Sleep(1500);
		cout << sqrt(x);
		cout << endl;
		Sleep(1700);
		cout << endl;
		goto label1;
	case 8:
		goto label9;
	label9:
		Sleep(600);
		cout << endl;
		system("CLS");
		Sleep(1700);
		goto label1;
	case 9:
		Sleep(400);
		cout << "Opuszczanie";
		cout << endl;
		Sleep(1000);
		break;
	case 7:
		goto label8;
	label8:
		unsigned int n;
		long long silnia = 1;
		cout << "Podaj liczbę: ";
		cin >> n;
		for (int i = n; i > 1; i--)
			silnia *= i;
		Sleep(1000);
		cout << "Slilnia podanej liczby wynosi:\n";
		Sleep(1500);
		cout << n << "! = " << silnia << endl;
		Sleep(1700);
		goto label1;
	}
	return 0;
}
