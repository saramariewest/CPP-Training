#include <iostream>
using namespace std;

int main() {
    int note;

    cout << "Bitte Note (1 bis 6) eingeben: ";
    cin >> note;

    switch (note) {
    case 1:
        cout << "sehr gut";
        break;
    case 2:
        cout << "gut";
        break;
    case 3:
        cout << "befriedigend";
        break;
    case 4:
        cout << "ausreichend";
        break;
    case 5:
        cout << "mangelhaft";
        break;
    case 6:
        cout << "ungenuegend";
        break;
    default:
        cout << "Fehler: Ungueltige Note!";
    }

    return 0;
}
