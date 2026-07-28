#include <stdio.h>

int main() {
    int sayi = 42;
    int *ptr1 = &sayi;      // sayi'nin adresini tutuyor
    int **ptr2 = &ptr1;     // ptr1'in adresini tutuyor

    // TODO: Sadece ptr2'yi kullanarak (yıldız sayılarına dikkat!) 
    //       sayi değişkeninin değerini 100 yap.

    **ptr2 = 100; // OLMAZ SANIYODUM OLDU AQ AKSDHFLAJKHGLAKJGALDHGSLJKAG

    printf("Yeni sayi: %d\n", sayi); // Ekranda 100 görmeliyiz!

    return 0;
}