#include <iostream>
#include <string>
using namespace std;

int main() {
    int jahre;
    string gekuendigt;
    int aktien = 0;

    cout << "Dauer der Betriebszugehörigkeit (Jahre): ";
    cin >> jahre;

    cout << "Gekündigt? (ja/nein): ";
    cin >> gekuendigt;

    if (gekuendigt == "ja")
        aktien = 0;
    else if (jahre > 10)
        aktien = 20;
    else if (jahre > 2)
        aktien = 10;
    else
        aktien = 0;

    cout << "Sie können " << aktien << " Aktien beziehen.\n";

    return 0;
}
