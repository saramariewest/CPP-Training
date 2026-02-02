#include <iostream>
using namespace std;

int main() {
    char antwort;

    cout << "Antworten Sie mit Ja (j/J) oder Nein (n/N): ";
    cin >> antwort;

    if (antwort == 'j' || antwort == 'J')
        cout << "Sie haben mit Ja geantwortet\n";
    else if (antwort == 'n' || antwort == 'N')
        cout << "Sie haben mit Nein geantwortet\n";
    else
        cout << "Falsche Eingabe\n";

    return 0;
}
