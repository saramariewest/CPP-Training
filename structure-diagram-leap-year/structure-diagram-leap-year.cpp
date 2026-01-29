Struktogramm

wenn(jahr % 4 == 0) und (jahr % 100 != 0 oder jahr % 400 == 0) → Schaltjahr
sonst → kein Schaltjahr


Jahr eingeben

if (jahr % 4 == 0) {
    if (jahr % 100 != 0) {
        Schaltjahr
    }
    else if (jahr % 400 == 0) {
        Schaltjahr
    }
    else {
        kein Schaltjahr
    }
}
 else {
    kein Schaltjahr
}
