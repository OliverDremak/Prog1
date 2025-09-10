#include <stdio.h>

// InfoC - Segitség, Fejlesztői körnezet setup
// Gyakorlat, labor - 70%-os részvétel
// 4-5 kis zh - 2 nagy zh
// nagy házi - 5. hét

/*Egy program bekér a felhasználótól három valós számot, kiírja, hogy az első szám negatív vagy nemnegatív, majd az első számtól indulva,
 *a második szám által meghatározott lépésközzel halad
 *a harmadik számig, a számsorozat elemeit kiírja.
 *Pl. be: 3.2 0.6 5.1 ki: nemnegativ 3.2 3.8 4.4 5.0
 *Pl. be: -1.7 1.0 2.5 ki: negativ -1.7 -0.7 0.3 1.3 2.3
 *Feltételezheted, hogy az első szám kisebb, mint a harmadik, és a második szám pozitív. Ezek ellenőrzésével nem kell foglalkoznod.*/

int SzámtaniSorozat() {
    printf("Adjon meg 3 számot(x y z):");
    double a,b, c;
    scanf("%lf %lf %lf", &a, &b, &c );
    for (float i = a; i < c; i = i + b) {
        printf("%.1f ", i);
    }
    return 0;
}

/*Egy program bekér a felhasználótól két pozitív egész számot,
 *és a kisebbiktől a nagyobbikig növekvő lépésközzel kiírja a számokat. A lépésköz kezdetben 1, és minden lépésben eggyel nő.
 *A program akkor is helyesen működik, ha a felhasználó előbb a felső, aztán az alsó határt adja meg (és fordítva is).
Pl. be: 4 23 ki: 4 5 7 10 14 19
Pl. be: 23 4 ki: 4 5 7 10 14 19*/
int SorozatNövekvőLépésekkel() {
    printf("be:");
    int a, b;
    scanf("%d %d", &a, &b);
    int lepes = 0;
    while (a <=b) {
        printf("%d ",a);
        lepes++;
        a = lepes + a;
    }
    return 0;
}

int main(void) {
    //SzámtaniSorozat();
    SorozatNövekvőLépésekkel();

    return 0;
}

