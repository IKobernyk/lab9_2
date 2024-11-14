#include <iostream>
#include <cmath>
#include <Windows.h>
#include<cstdlib>
using namespace std;

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, h, x, y;
    int k;

    cout << "Введіть початок інтервалу a: ";
    cin >> a;

    cout << "Введіть кінець інтервалу b: ";
    cin >> b;

    cout << "Введіть кількість точок розбиття k: ";
    cin >> k;

    if (k <= 0 || a <= 0) {
        cout << "Некоректні вхідні дані." << endl;
        return 1;
    }

    h = (b - a) / k;
    x = a;

    cout << " x\t\t y" << endl;
    for (int i = 0; i <= k; i++) {
        if (x > 0) {
            y = sin(log(pow(x, 3)) + abs(x));
            cout << x << "\t" << y << endl;
        }
        else {
            cout << x << "\t Не визначено" << endl;
        }
        x += h;
    }

    return 0;
}