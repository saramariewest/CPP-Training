#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float listeneinkaufspreis;
    float rabattProzent;
    float skontoProzent;
    float bezugskosten;
    float handlungskostenSatz;
    float gewinnzuschlagProzent;

    float rabattBetrag;
    float zieleinkaufspreis;

    float skontoBetrag;
    float bareinkaufspreis;

    float bezugspreis;
    float handlungskosten;

    float selbstkostenpreis;
    float gewinn;

    float nettoverkaufspreis;
    float mehrwertsteuer;
    float bruttoverkaufspreis;

    cout << "Listeneinkaufspreis: ";
    cin >> listeneinkaufspreis;

    cout << "Rabatt (in %): ";
    cin >> rabattProzent;

    cout << "Skonto (in %): ";
    cin >> skontoProzent;

    cout << "Bezugskosten: ";
    cin >> bezugskosten;

    cout << "Handlungskostensatz (in %): ";
    cin >> handlungskostenSatz;

    cout << "Gewinnzuschlag (in %): ";
    cin >> gewinnzuschlagProzent;

    rabattBetrag = listeneinkaufspreis * rabattProzent / 100;
    zieleinkaufspreis = listeneinkaufspreis - rabattBetrag;

    skontoBetrag = zieleinkaufspreis * skontoProzent / 100;
    bareinkaufspreis = zieleinkaufspreis - skontoBetrag;

    bezugspreis = bareinkaufspreis + bezugskosten;

    handlungskosten = bezugspreis * handlungskostenSatz / 100;
    selbstkostenpreis = bezugspreis + handlungskosten;

    gewinn = selbstkostenpreis * gewinnzuschlagProzent / 100;
    nettoverkaufspreis = selbstkostenpreis + gewinn;

    mehrwertsteuer = nettoverkaufspreis * 0.16f;
    bruttoverkaufspreis = nettoverkaufspreis + mehrwertsteuer;

    cout << fixed << setprecision(2);

    cout << "\nAusgabebildschirm\n\n";

    cout << left << setw(30) << "Listeneinkaufspreis:" << right << setw(10)
        << listeneinkaufspreis << " EUR\n";

    cout << left << setw(30) << "Rabatt:" << right << setw(10)
        << rabattBetrag << " EUR\n";

    cout << left << setw(30) << "Zieleinkaufspreis:" << right << setw(10)
        << zieleinkaufspreis << " EUR\n";

    cout << left << setw(30) << "Skonto:" << right << setw(10)
        << skontoBetrag << " EUR\n";

    cout << left << setw(30) << "Bareinkaufspreis:" << right << setw(10)
        << bareinkaufspreis << " EUR\n";

    cout << left << setw(30) << "Bezugskosten:" << right << setw(10)
        << bezugskosten << " EUR\n";

    cout << left << setw(30) << "Bezugspreis:" << right << setw(10)
        << bezugspreis << " EUR\n";

    cout << left << setw(30) << "Handlungskosten:" << right << setw(10)
        << handlungskosten << " EUR\n";

    cout << left << setw(30) << "Selbstkostenpreis:" << right << setw(10)
        << selbstkostenpreis << " EUR\n";

    cout << left << setw(30) << "Gewinn:" << right << setw(10)
        << gewinn << " EUR\n";

    cout << left << setw(30) << "Barverkaufspreis:" << right << setw(10)
        << nettoverkaufspreis << " EUR\n";

    cout << left << setw(30) << "Mehrwertsteuer (16%):" << right << setw(10)
        << mehrwertsteuer << " EUR\n";

    cout << left << setw(30) << "Bruttoverkaufspreis:" << right << setw(10)
        << bruttoverkaufspreis << " EUR\n";

    return 0;
}
