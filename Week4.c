//
// Created by Oliver Dremak on 2025. 10. 02..
//
#include <stdio.h>

void TerfogatSzamolo(int *pa) {
    *pa = *pa * *pa * *pa;
}

void FelületSzamolo(int *pa) {
    *pa = *pa * *pa * 6;

}

int *TombItemKereso(int *t,int size, int a) {
    for (int *p = t; p != t + size; ++p) {
        if (*p == a) {
            return p;
        }
    }
    return NULL;
}

void KiImre() {
    char s[4] = "Imre";
    for (int i = 0; i < 4; ++i) {
        printf("%c\n",s[i]);
    }
}

void Trim(char in[100], char *out, int l) {
    int oi = 0;
    for (int i = 0; i < 100; ++i) {
        if (in[i] != ' ') {
            out[oi] = in[i];
            oi++;
        }
    }

    out[oi] = '\0';
}

void Trim2(char in[], char *out, int l) {
    int start = 0;
    int end = l-1;
    int c = 0;
    while (in[start] == ' ') {
            start++;
    }
    while (in[end] == ' ' || in[end] == '\0') {
        end--;
    }

    for (int i = start; i <= end; ++i) {
        out[c] = in[i];
        c++;
    }
}