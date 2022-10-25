#include <iostream>
using namespace std;

// Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b)
// Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс,
// таким образом, чтобы было понятно, в каком порядке должны вводиться числа.

int main(int args, char const* atgv[]) {
    double a = 0, b = 0, f = 0;
    cout << "Enter numbers a, b, f:";
        cout << "\na = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "f = ";
        cin >> f;
    cout << ((a + b - f / a) + f * a * a - (a + b));
    return 0;
}