#include <stdio.h>
//
// Created by Oliver Dremak on 2025. 09. 17..
//
//5.
void Legkisebb() {
    int tomb[10]= {12,1,212,33,33,44,5,3,12,7};
    printf("A tömb: ");
    int hely = 0;
    for (int i = 0; i < 10; ++i) {
        printf("[%d]=%d ",i,tomb[i]);
        if (tomb[i] < tomb[hely]) {
            hely = i;
        }
    }
    printf("\nLegkisebbb szám: %d\nLegkisebb szám indexe:%d\nJelölve: ", tomb[hely], hely);
    for (int i = 0; i < 10; ++i) {
        if (i == hely) {
            printf("%d[min] ",tomb[i]);
        } else {
            printf("%d ",tomb[i]);
        }
    }
}

//6.
void TombLeptetese() {
    char pit[10] = {'P','i','t','a','g','o','r','a','s','z'};
    for (int i = 0; i < 10; ++i) {
        for (int i = 0; i < 10; ++i) {
            printf("%c ",pit[i]);
        }
        printf("\n");
        char s = pit[0];
        for (int i = 0; i < 9; ++i) {
            pit[i] = pit[i+1];
        }
        pit[9] = s;
    }
}
