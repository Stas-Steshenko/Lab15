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
    cout << "Елементи масиву в зворотньому порядку: " << endl;
    for (int i = n - 1; i >= 0; --i) {
        cout << "Елемент " << i + 1 << ": " << myArray[i] << endl;
    }
    delete[] myArray;

    return 0;
}