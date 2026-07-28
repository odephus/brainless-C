#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

void hatali_swap(int a, int b){ //main de hiçbir cacığı değiştireemeezz ammaaaaa
    int temp = a;
    a = b;
    b = temp;

}

void dogru_swap(int *a, int *b){ //pointer baba direkt ramdeki adresleri okur ve dokunur 😎
    int temp = *a;  // a'nın işaret ettiği adresteki değeri temp'e at
    *a = *b;         // b'nin adresindeki değeri, a'nın adresine yaz
    *b = temp;      // temp'i b'nin adresine yaz
}

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    int x = 5, y = 10;
    printf("Baslangic: x = %d, y = %d\n", x, y);
    hatali_swap(x,y);
    printf("Hatali Swap Sonrasi: x = %d, y = %d (Degismedi!)\n", x, y);
    dogru_swap(&x,&y); // UNUTMA BUNLAR POINTER O YUZDEN '&' KULLANCAN TM
    printf("Dogru Swap Sonrasi : x = %d, y = %d (BOOOM! Değişti!)\n", x, y);

    
    return 0;
}