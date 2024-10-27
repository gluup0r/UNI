#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, c, x, F;
    cout << "������ �������� a: ";
    cin >> a;
    cout << "������ �������� b: ";
    cin >> b;
    cout << "������ �������� c: ";
    cin >> c;
    cout << "������ �������� x: ";
    cin >> x;

    if (x < 0 && b + 7 != 0 && x != 0) { // ���: x ? 0
        F = sqrt(a * x * x) + b / x;
    }
    else if ((17 - x > b) || a == 0 && x + a != 0) { // ���: x ? -a
        F = abs(x - a) / (x + a);
    }
    else if (c != 0 && x >= 0) { // ���: c ? 0 � x ? 0
        F = sqrt(x) / c;
    }

    cout << "�������� F: " << F << endl;
}

