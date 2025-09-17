//
// Created by Oliver Dremak on 2025. 09. 10..
//
#include <stdio.h>
#include <math.h>
#include "Week1.h"



//Labor 1 - feladatok

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