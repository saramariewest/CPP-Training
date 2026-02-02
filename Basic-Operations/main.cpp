#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;

    cout << "Erste Zahl eingeben: ";
    cin >> a;
    cout << "Zweite Zahl eingeben: ";
    cin >> b;

    cout << fixed << setprecision(2);

    cout << setw(10) << a + b << endl;
    cout << setw(10) << a - b << endl;
    cout << setw(10) << a * b << endl;
    cout << setw(10) << a / b << endl;

    return 0;
}
