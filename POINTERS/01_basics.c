#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    int num = 42;
    int *ptr = &num;

    printf("--- NORMAL DEĞİŞKEN ---\n");
    printf("sayi'nin Degeri : %d\n", num);
    printf("Sayı'nın ADRESİ : %p\n",(void*)&num);

    *ptr = 100;
    printf("Yeni sayi degeri: %d\n", num);

    printf("\n--- POINTER (PTR) ---\n");
    printf("ptr'nin Degeri (Icindaki Adres): %p\n",(void*)ptr);
    printf("ptr'nin Isaret Ettigi Deger (*ptr): %d\n",*ptr);
    printf("ptr'nin Kendi Bellek Adresi       : %p\n", (void*)&ptr);
    return 0;
}