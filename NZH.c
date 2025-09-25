//
// Created by Oliver Dremak on 2025. 09. 22..
//
#include <stdbool.h>
#include <stdio.h>
//A kapitány
//NZH-n volt
//A kapitány abban az évben született, amely 2016-hoz alulról a legközelebbi olyan szám, melynek osztói száma 8, és van benne 7-es számjegy.
//Hány éves a kapitány? Határozzuk meg algoritmikus módszerrel egy teljes C programban az évszámot!
//Írjuk ki ezt is, és azt is, hogy most hány éves!
//Használjunk top-down tervezést! Ha jól csináljuk, a main() kb. 5 soros, és azt mondja:
//Az év változóban legyen 2016, és amíg nem igaz a vizsgált számra, hogy az osztóinak száma 8, és van benne 7-es számjegy,
//addig csökkentjük az év változó értékét.
//(1978 a megoldás.)

bool VanE(int num, int keresett) {
    while (num != 0) {
        if (num % 10 == keresett)
            return true;
        num /= 10;
    }
    return false;
}

int OsztokSzama(int szam) {
    int cnt = 1;
    for (int i = 1; i <= szam/2; ++i) {
        if (szam % i == 0) {
            cnt++;
        }
    }
    return cnt;
}

int AKapitany(int ev) {
    for (int i = ev; i > 0; i--) {
        if (VanE(i,7) && OsztokSzama(i) == 8) {
            return i;
        }
    }
    return -1;
}

void KiirKapitany() {
    int ev = 2016;
    int x = AKapitany(ev);
    printf("%d-ben született a kapitány\n", x);
    printf("%d éves a kapitany", 2025 - x);
}


