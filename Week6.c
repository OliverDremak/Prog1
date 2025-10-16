//
// Created by Oliver Dremak on 2025. 10. 16..
//
#include <stdio.h>

#include "../../../../Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_inttypes.h"

// 2.
int Fibonacci(int n) {
    if (n == 1 || n == 0 )
        return n;
    return Fibonacci(n-1) + Fibonacci(n-2);
}

// 4
int l = 10;
int tomb[10] = {0};
// Iterativ
//Elore
void IE(int t[], int l) {
    for (int i = 0; i < l; ++i) {
        printf("%d",t[i]);
    }
}

//Hatra
void IH(int t[], int l) {
    for (int i = l; i > 0; --i) {
        printf("%d",t[i]);
    }
}

// Rekurziv
//Elore
void RE(int t[], int l){
    if (l>0) {
        printf("%d ", t[0]);
        RE(t+1,l-1);
    }
}


//Hatra
void RH(int t[], int l){
    printf("%d ", t[l-1]);
    l--;
    if (l>0)
        RH(t,l);
}




// 5
void SzamRendszer(int n, int szr) {
    if (n > 1)
        SzamRendszer(n/szr, szr);
    printf("%d", n % szr);
}

// 6
void SzamInTree(int n) {
    if (n > 1000)
        SzamInTree(n/1000);
    printf("%d ", n % 1000);

}
