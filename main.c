#include "Week1.h"
#include "KZH.h"
#include "Week2.h"
#include "NZH.h"
#include <stdio.h>
#include "Week3.h"
#include "Week4.h"
#include "Week6.h"


// InfoC - Segitség, Fejlesztői körnezet setup
// Gyakorlat, labor - 70%-os részvétel
// 4-5 kis zh - 2 nagy zh
// nagy házi - 5. hét
int IsSzokoEv(int ev) {
    if (ev % 400 == 0 || (ev % 4 == 0 && ev % 100 != 0)) {
        return 1;
    }
    return 0;
}
void Gyakshit() {
    int ev,ho,nap, sum;
    int hoes[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("ev ho nap");
    scanf("%d%d%d",&ev,&ho,&nap);
    for (int i = 0; i < ho-1; ++i) {
        sum += hoes[i];
    }
    printf("%d nap", nap+sum+IsSzokoEv(ev));
}

void asd(){
    int i = 4;
    printf("a: %d\n",i);
    TerfogatSzamolo(&i);
    printf("terület: %d\n",i);
    i = 4;
    FelületSzamolo(&i);
    printf("felület: %d\n",i);
    KiImre();
    char in[100] = "  Szia Hello Mizuuujs?    ";
    char out[100];
    int l=100;
    Trim2(in,out,l);
    printf("%s!", out);
}

int main(void) {

    //printf("%d\n",Fibonacci(5));
    //SzamRendszer(6,2);
    //SzamInTree(11112312);
    int l=10;
    int t[10] = {0,1,2,3,4,5,6,7,8,9};
    RE(t,l);
    //Szogek();
    //Tartaly();
    //SorozatNovekvoLepesekkel();
    //SzamtaniSorozat();
    //SzamGondolo(1);
    //MasodfokuMegoldo();
    //MasodFokuMegoldo(2, -1, -6);
    //TombLeptetese();
    //Muzeum1();
    //Autopalya1();
    //KiirKapitany();
    //Függvények_alapok();
    //Madarnyelv();
    //2OsszetettAdatszerkezet();
    //MenuVezerelt();
    //VektorkFeladat();
    return 0;

}

