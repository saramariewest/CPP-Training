#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Geben Sie die Temperatur in Fahrenheit ein: ";
    cin >> fahrenheit;

    celsius = ((fahrenheit - 32) * 5) / 9;

    cout << "Temperatur in Celsius: " << celsius << endl;

    return 0;
}
