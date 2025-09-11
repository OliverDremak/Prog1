//
// Created by Oliver Dremak on 2025. 09. 10..
// kisZH gyakorás
//
#include <stdio.h>
#include <math.h>
#include "Week1.h"


/*Egy program bekér a felhasználótól három valós számot, kiírja, hogy az első szám negatív vagy nemnegatív, majd az első számtól indulva,
 *a második szám által meghatározott lépésközzel halad
 *a harmadik számig, a számsorozat elemeit kiírja.
 *Pl. be: 3.2 0.6 5.1 ki: nemnegativ 3.2 3.8 4.4 5.0
 *Pl. be: -1.7 1.0 2.5 ki: negativ -1.7 -0.7 0.3 1.3 2.3
 *Feltételezheted, hogy az első szám kisebb, mint a harmadik, és a második szám pozitív. Ezek ellenőrzésével nem kell foglalkoznod.*/

int SzamtaniSorozat() {
    printf("Adjon meg 3 számot(x y z):");
    double a,b, c;
    scanf("%lf %lf %lf", &a, &b, &c );
    for (double i = a; i < c; i = i + b) {
        printf("%.1f ", i);
    }
    return 0;
}

/*Egy program bekér a felhasználótól két pozitív egész számot,
 *és a kisebbiktől a nagyobbikig növekvő lépésközzel kiírja a számokat. A lépésköz kezdetben 1, és minden lépésben eggyel nő.
 *A program akkor is helyesen működik, ha a felhasználó előbb a felső, aztán az alsó határt adja meg (és fordítva is).
Pl. be: 4 23 ki: 4 5 7 10 14 19
Pl. be: 23 4 ki: 4 5 7 10 14 19*/
int SorozatNovekvoLepesekkel() {
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

//5.

float TartalySzamolo(int m, float d) {
    float r = d/2;
    float pi = 3.1416;
    return (2*r*r*pi+2*r*pi*m)/2;
}

void Tartaly() {
    printf("Tartály festése\n\n");
    printf("Milyen magas:");
    int a;
    scanf("%d", &a);
    printf("Mennyi az ármérője:");
    float b;
    scanf("%f", &b);
    printf("\n\n%f", TartalySzamolo(a, b));
}

//6.

void ValosMegoldasNum(int a, int b, int c) {
    float diskriminans = b*b-4*a*c;
    if (diskriminans > 0) {
        printf("Két valos megoldás van.");
    }
    else if (diskriminans == 0) {
        printf("Egy valos megoldás.");
    }
    else {
        printf("Nincs valós megoldás.");
    }
}

void MasodFokuDisk() {
    printf("Adja meg a egyenlet értékeit:");
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    ValosMegoldasNum(a,b,c);
}

// 7.

void SzamGondolo(int gondolt) {
    for (int i = 0; i <= 20; ++i) {
        printf("%d\n", gondolt);
        gondolt++;
    }
}

// 8.

void KigyoGyarto(int l) {
    printf("+");
    for (int i = 0; i <= l; ++i) {
        printf("-");
    }
    printf("+");
}


// 9.

void MasodFokuMegoldo(int a, int b, int c) {
    double diszkriminans = b * b - 4 * a * c;
    float x1, x2;
    if (diszkriminans < 0) {
        printf("Nincs valos gyok");
    }
    else if (diszkriminans == 0) {
        x1 = -b / (2 * a);
        printf("Egy valos megoldás van: %.2f",x1);
    }
    else {
        x1 = (-b + sqrt(diszkriminans)) / (2 * a);
        x2 = (-b - sqrt(diszkriminans)) / (2 * a);
        printf("Két valós megoldás van: %.2f, %.2f",x1,x2);
    }
}