#include <iostream>
using namespace std;

int main() {

    system("cls");

    int menge;
    double preis, rabattP, skontoP, versand;

    cout << "EINGABEN\n";
    cout << "--------------------\n";

    cout << "Menge: ";
    cin >> menge;

    cout << "Preis pro Stueck (EUR): ";
    cin >> preis;

    cout << "Rabatt in %: ";
    cin >> rabattP;

    cout << "Skonto in %: ";
    cin >> skontoP;

    cout << "Versandkosten (EUR): ";
    cin >> versand;

    cout << "\nENTER druecken...";
    cin.ignore();
    cin.get();

    system("cls");

    double listenpreis = menge * preis;
    double rabatt = listenpreis * rabattP / 100;
    double ziel = listenpreis - rabatt;
    double skonto = ziel * skontoP / 100;
    double bar = ziel - skonto;
    double bezug = bar + versand;

    cout << "KALKULATION\n";
    cout << "--------------------\n";
    cout << "Listenpreis: " << listenpreis << " EUR\n";
    cout << "- Rabatt: " << rabatt << " EUR\n";
    cout << "= Zieleinkaufspreis: " << ziel << " EUR\n";
    cout << "- Skonto: " << skonto << " EUR\n";
    cout << "= Bareinkaufspreis: " << bar << " EUR\n";
    cout << "+ Versandkosten: " << versand << " EUR\n";
    cout << "--------------------\n";
    cout << "= Bezugspreis: " << bezug << " EUR\n";

    return 0;
}
