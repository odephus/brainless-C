#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdbool.h>

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("Dizinin ilk elemanının adresi: %p\n",(void*)numbers);
    printf("\nPointer'in tuttuğu adres: %p\n",(void*)ptr);

    printf("\n--- POINTER ARİTMETİĞİ İLE GEZİNME ---\n");
    for (int i = 0; i < 5; i++){
        // *(ptr + i) demek: ptr adresinden i kadar eleman ileri git ve DEĞERİ oku
        printf("Index %d -> Değer: %d :: ADRES(%p)\n",i,*(ptr + i),(void*)(ptr + i));
    }

    return 0;
}