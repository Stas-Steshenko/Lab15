#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int s = 0;
    int n;

    cout << "Введіть кількість чисел: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        cout << "Введіть число " << i + 1 << ": ";
        cin >> num;

        s += num;
    }
    cout << "Накопичена сума: " << s << endl;

    return 0;
}