#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	int b;
	cout << "Введіть два числа: " << endl;
	cin >> a;
	cin >> b;
	cout << "Результат: " << endl;
	if (a > b) {
		cout << a;
	}
	else
		cout << a << endl << b;

	return 0;
}