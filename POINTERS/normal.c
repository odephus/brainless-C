#include <stdio.h>
#define vo void

int main() {
    int sayilar[] = {1, 2, 3, 4, 5};
    int *ptr = sayilar;

    //printf("deger: %d\n",(*ptr * 13));

    for (int i = 0; i < 5; i++){
        // *(ptr + i) demek: ptr adresinden i kadar eleman ileri git ve DEĞERİ oku
        int zab = *(ptr + i) * 2;
        printf("index %d :: deger %d :: yenideger %d\n",i,*(ptr + i),zab);
    }

    return 0;
}