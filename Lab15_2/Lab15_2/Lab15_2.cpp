#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	int b;
	int c;
	cout << "Введіть три числа: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Результат: " << endl;
	int minNumber = a;

	if (b < minNumber) {
		minNumber = b;
	}
	if (c < minNumber) {
		minNumber = c;
	}
	cout << "Найменше число: " << minNumber << endl;
	return 0;
}