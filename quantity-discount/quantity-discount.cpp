#include <iostream>
using namespace std;

int main() {
    int stueck;
    double preis, gesamt;

    cout << "Stueckzahl: ";
    cin >> stueck;

    cout << "Einzelpreis: ";
    cin >> preis;

    gesamt = stueck * preis;

    if (stueck > 50)
        gesamt = gesamt * 0.9;
    else if (stueck > 10)
        gesamt = gesamt * 0.95;

    cout << "Gesamtpreis: " << gesamt << " EUR\n";

    return 0;
}
