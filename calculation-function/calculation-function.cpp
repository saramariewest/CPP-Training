#include <iostream>
#include <iomanip>
using namespace std;

float berechnung(float radius);

int main() {
    float radius;
    float flaeche;

    cout << "Radius eingeben: ";
    cin >> radius;

    flaeche = berechnung(radius);

    cout << fixed << setprecision(2);
    cout << "Die Flaeche des Kreises betraegt: "
        << flaeche << endl;

    return 0;
}

float berechnung(float radius) {
    const float pi = 3.14159;
    return pi * radius * radius;
}
