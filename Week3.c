#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
//
// Created by Oliver Dremak on 2025. 09. 25..
//

// 2

double kob(double n) {
    return n*n*n;
}
double abszolut(double n){
    if (n<0)
        return -n;
    return n;
}

void Fuggvenyek_alapok() {
    for (double a = -1.0; a <= 1.0001; a += 0.1) {
        printf("%6.2f, %8.4f | %8.4f | %8.4f\n",
               a, kob(a), abszolut(a), sin(a));
    }
}
// 3

bool MaganhangozoE(char c) {
    if (strchr("aeuoiAEUOI",c)) {
        return true;
    }
    return false;
}

void Madarnyelv() {
    char c;
    while (scanf("%c", &c) != EOF) {
        if (MaganhangozoE(c)) {
            printf("%c",c);
            if (c >= 'A' && c <= 'Z') {
                c = c + 'a'-'A';
            }
            printf("v%c", c);
        }
        else
            printf("%c", c);
    }
}

// 4
typedef struct Koordinata {
    double x,y;
} Koordinata;

void Pontoksamolo() {
    Koordinata a;
    a.x = 2.2;
    a.y = 1.6;
    Koordinata b;
    scanf("%lf%lf",&b.x,&b.y);
    Koordinata f;
    f.x = (a.x+b.x)/2;
    f.y = (a.y+b.y)/2;
    printf("%f.%f",f.x,f.y);
}

// 5
typedef struct Datum {
    int ev, ho, nap;
} Datum;

typedef struct Versenyzo {
    char nev[31];
    Datum szuletes;
    int helyezes;
} Versenyzo;

void datum_kiir(Datum d);

void versenyzo_kiir(Versenyzo v);

void OsszetettAdatszerkezet() {
    Versenyzo versenyzok[5] = {
        { "Am Erika", {1984, 5, 6}, 1 },
        { "Break Elek", {1982, 9, 30}, 3 },
        { "Dil Emma", {1988, 8, 25}, 2 },
        { "Kasza Blanka", {1979, 6, 10}, 5 },
        { "Reset Elek", {1992, 4, 5}, 4 },
    };

    /* 0-s versenyző neve - printf %s */
    printf("%s\n",versenyzok[0].nev);
    /* 2-es versenyző helyezése */
    printf("%d\n",versenyzok[2].helyezes);
    /* 4-es versenyző születési dátumát (írd meg a datum_kiir függvényt!) */
    datum_kiir(versenyzok[4].szuletes);
    /* 1-es versenyző nevének kezdőbetűjét (ne feledd, a sztring karaktertömb) */
    printf("%c\n",versenyzok[0].nev[0]);
    /* az 1-es versenyző dobogós-e? igen/nem, akár ?: operátorral, de egy printf-fel */
    printf(versenyzok[1].helyezes<=3 ? "igen\n" : "nem\n");
    /* az 4-es versenyző gyorsabb-e, mint a 3-as versenyző? */
    printf(versenyzok[4].helyezes< versenyzok[3].helyezes  ? "igen\n" : "nem\n");
    /* az 1-es versenyző ugyanabban az évben született-e, mint a 2-es? */
    printf(versenyzok[1].szuletes.ev == versenyzok[2].szuletes.ev  ? "igen\n" : "nem\n");
    /* egészítsd ki a versenyzo_kiir() függvényt,
     * aztán írd ki az 1-es versenyző összes adatát */
    versenyzo_kiir(versenyzok[1]);
    /* végül listázd ki az összes versenyzőt sorszámozva, összes adatukkal. */
    for (int i = 0; i < 5; ++i) {
        printf("[%d]",i);
        versenyzo_kiir(versenyzok[i]);
    }
}

void datum_kiir(Datum d) {
    printf("%d.%d.%d\n",d.ev,d.ho,d.nap);
}

void versenyzo_kiir(Versenyzo v) {
    printf("név: %s, helyezés: %d, Születés:",v.nev,v.helyezes);
    datum_kiir(v.szuletes);
}

// 6
 void MenuVezerelt() {
    int m = 1;
    int a = 1;
    do {
        printf("0. Alapertek visszaallitasa (a = 1)\n"
       "1. Hozzaad 1-et\n"
       "2. Megforditja az elojelet\n"
       "3. Szorozza 2-vel\n"
       "9. Kilepes\n");
        scanf("%d",&m);
        switch (m) {
            case 0:
                a = 1;
                printf("a = 1\n");
                break;
            case 1:
                a++;
                printf("%d\n",a);
                break;
            case 2:
                a = a*-1;
                printf("%d\n", a);
                break;
            case 3:
                a = a*2;
                printf("%d\n",a);
                break;
            case 9:
                break;
            default:
                break;
        }
    } while (m != 9);
}