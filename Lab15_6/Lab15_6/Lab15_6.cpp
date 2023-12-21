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

    cout << "Введіть цілі елементи масиву: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> myArray[i];
    }
    
    int max = myArray[0];
    int min = myArray[0];

    for (int i = 1; i < n; ++i) {
        if (myArray[i] > max) {
            max = myArray[i];
        }
        if (myArray[i] < min) {
            min = myArray[i];
        }
    }
    cout << "Максимальне значення: " << max << endl;
    cout << "Мінімальне значення: " << min << endl;
    delete[] myArray;

    return 0;
}