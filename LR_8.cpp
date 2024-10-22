#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double m1 = 6;
    double m2 = 1;
    double m3 = 8;

    double totalCost = m1 * 45.5 + m2 * 17.40 + m3 * 31.5;

    cout << fixed << setprecision(2) << "—ума = " << totalCost << " грн" << endl;
}