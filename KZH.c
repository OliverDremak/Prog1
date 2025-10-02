//
// Created by Oliver Dremak on 2025. 09. 15..
//

#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// Kis zh példák

//
// F01
//
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
/*Egy program bekér a felhasználótól két valós számot, melyek két szöget jelentenek °-ban.
 *A program a kisebb szögtől a nagyobbig haladva kiírja a szögeket egy fokonként, és mindegyik szög mellett
 *zárójelbe téve radiánban is kiírja a szöget (1°=π/180 rad). A program akkor is helyesen működik, ha a felhasználó előbb a nagyobb, aztán a
 *kisebb szöget adja meg (és fordítva is).
 *Pl. be: 11.3 14.9 ki: 11.3 (0.197), 12.3 (0.215), 13.3 (0.232), 14.3 (0.249),
 *Pl. be: 180 176 ki: 176 (3.07), 177 (3.09), 178 (3.11), 179 (3.12), 180 (3.14),*/

int Szogek() {
    const float pi = 3.14;
    float a,f,s;
    printf("be:");
    scanf("%f%f",&a,&f);
    if (a>f) {
        s =a;
        a = f;
        f = s;
    }
    printf("ki:");
    while (a<=f) {
        printf(" %.1f(%f)",a, a*pi/180);
        a++;
    }
    return 0;
}


void PrimSzamIro() {
    int szam =120;
    int i =2;
    while (szam != 1) {
        if (szam % i == 0 ) {
            printf("%6d", szam);
            szam = szam/i;
            printf("|%d\n", i);
        } else {
            i++;
        }
    }
    printf("%6d|",1);
}

void Kiszh1() {
    int db, szam;
    int osztok = 0;
    int talalat = 0;
    printf("db");
    scanf("%d",&db);
    for (int i = 0; i < db; ++i) {
        printf("szam:");
        scanf("%d", &szam);
        for (int j = 1; j <= szam; ++j) {
            if (szam % j == 0) {
                osztok++;
            }
        }
        if (osztok == 2) {
            printf("2, prim");
        } else {
            printf("%d nem prim", osztok);
            talalat++;
        }
        osztok = 0;
        printf("%d darab osszetett", talalat);
    }
}

//
// F02
//


/*Egy múzeumban kíváncsiak arra, a hét mely napján van a legtöbb látogató. Ehhez több hét adatait feldolgozzák.
 *Írj programot, mely a szabványos bemenetén fogadja a múzeum napi látogatási adatait úgy,
 *hogy soronként a hét napjának sorszámát kapjuk 0-6 között, majd szóközzel elválasztva a látogatók számát.
 *Az adatok rendezetlenül érkeznek, adott sorszámú naphoz több bejegyzés is tartozhat. A bemenet végét -1 -1 jelzi.
 *Írja ki a program a szabványos kimenetre annak a napnak a sorszámát, mely a legtöbb látogatót jelenti. Feltételezzük, hogy egy ilyen nap van.
 */

// Ez nem igy kell, de mind 1

struct MyInp {
    int day;
    int peopleNum;
};

void Muzeum1() {
    // Ezt nem igy kell: a jo megoldásért:


    struct MyInp tomb[10];
    {
        int i = 0;
        int temp1, temp2;
        do {
            scanf("%d%d",&temp1, &temp2);
            tomb[i].day = temp1;
            tomb[i].peopleNum = temp2;
            i++;
        } while (temp1 != -1 && temp2 != -1);
    }
    int maxDay = tomb[0].day;
    for (int j = 1; j < 10; ++j) {
        if (tomb[j].peopleNum == -1 ) {
            break;
        }
        if (tomb[j].peopleNum > tomb[j-1].peopleNum ) {
            maxDay = tomb[j].day;
        }

    }
    printf("%d", maxDay);

}

/*Az M7-es autópályán traffipaxot szerelnek fel, amely a Balaton felé igyekvők gyorshajtásait rögzíti.
 *A mérés több nap adatait is tartalmazza; egy autó adatait „óra perc sebesség” formában.
 *Pl. 12 45 198 azt jelenti, 12:45-kor 198 km/h-val száguldott valaki. Az adatsor végét 0 0 0 zárja.
 *Készíts a C programod egy táblázatot arról, hogy melyik órában mennyivel ment a leggyorsabb autó!
 *Ha egy adott órában nem volt gyorshajtás, az maradjon ki!*/

void Autopalya1() {

    int maxPerOra[24] = {0};
    {
        int temp, temp1, temp2;
        do {
            scanf("%d%d%d",&temp,&temp1,&temp2);
            if (temp2 > 130 && temp2 > maxPerOra[temp]) {
                maxPerOra[temp] = temp2;
            }
        } while (temp != 0);
    }
    for (int i = 0; i < 24; ++i) {
        if (maxPerOra[i] > 130) {
           printf("%d:00 - %d:59 -> %d km/h\n",i ,i, maxPerOra[i] );
        }

    }
}
//
//f03
//
typedef struct Vektor {
    double x,y;
} Vektor;

double VektorLength(Vektor v) {
    return sqrt(v.x*v.x + v.y*v.y);
}

Vektor OsszegVektor(Vektor v, Vektor b) {
    Vektor x;
    x.x = v.x+b.x;
    x.y = v.y+b.y;
    return x;
}

void VektorkFeladat() {
    Vektor a;
    a.x = 1;
    a.y = 2;
    Vektor b;
    b.x = 2;
    b.y = 2;
    printf("%lf",VektorLength(OsszegVektor(a,b)));
}


typedef struct Kor {
    double x,y,r;
} Kor;

bool FedikE(Kor a, Kor b) {

}

void AtfodoKorok() {

}