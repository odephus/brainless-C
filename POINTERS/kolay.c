#include <stdio.h>

int main() {
    int sayi = 10;
    int *ptr = &sayi; //alberim unutma sayi bir degiskken sen & yapmazsan onu ptr içine NAH atarsın tm?
    *ptr = 100 - 1;

    printf("Yeni sayi degeri: %d\n", sayi); // Ekranda 99 görmeliyiz!

    return 0;
}