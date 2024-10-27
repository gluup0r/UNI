#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, c, x, F;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;
    cout << "Введіть значення c: ";
    cin >> c;
    cout << "Введіть значення x: ";
    cin >> x;

    if (x < 0 && b + 7 != 0 && x != 0) { // ОДЗ: x ? 0
        F = sqrt(a * x * x) + b / x;
    }
    else if ((17 - x > b) || a == 0 && x + a != 0) { // ОДЗ: x ? -a
        F = abs(x - a) / (x + a);
    }
    else if (c != 0 && x >= 0) { // ОДЗ: c ? 0 і x ? 0
        F = sqrt(x) / c;
    }

    cout << "Значення F: " << F << endl;
}

