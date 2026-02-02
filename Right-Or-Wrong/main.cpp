#include <iostream>
using namespace std;

int main() {
    int zahl;

    cout << "Geben Sie eine Zahl ein: ";
    cin >> zahl;

    if (zahl >= 10 && zahl <= 100)
        cout << "richtig" << endl;
    else
        cout << "falsch" << endl;

    return 0;
}
