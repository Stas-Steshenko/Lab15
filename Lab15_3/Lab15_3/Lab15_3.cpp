#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << "Введіть розмір масиву: ";
	cin >> n;

	int* myArray = new int[n];

    cout << "Введіть елементи масиву: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> myArray[i];
    }
    for (int i = 0; i < n; ++i) {
        if (myArray[i] % 2 == 0) {
            myArray[i] = 0;
        }
    }
    cout << "Оновлений масив: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << myArray[i] << " ";
    }
    delete[] myArray;

	return 0;
}