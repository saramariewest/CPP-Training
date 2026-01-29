#include <iostream>
#include <iomanip>
using namespace std;

void ausgabe(float flaeche);

int main() {
    float radius;
    float flaeche;
    const float pi = 3.14159;

    cout << "Radius eingeben: ";
    cin >> radius;

    flaeche = pi * radius * radius;

    ausgabe(flaeche);

    return 0;
}

void ausgabe(float flaeche) {
    cout << fixed << setprecision(2);
    cout << "Die Flaeche des Kreises betraegt: "
        << flaeche << endl;
}
