#include<stdio.h>
#include<locale.h>

//define zaten malum makro atamaları için
#define read(inp) _Generic((inp), \
    int* : scanf("%d",(int*)(inp)), \
    float* : scanf("%f",(float*)(inp)), \
    char* : scanf("%s",(char*)(inp))   \
)

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    int yas;
    float boy;
    char isim[50];

    printf("İsim | Yaş | Boy giriniz: ");
    read(isim);  //emmolu char dizileri zaten pointer sayılır yani & bu kakayı kullanmana gerek yok 😎
    read(&yas);
    read(&boy);


    printf("İsim: '%s' | Yaş: '%d' | Boy: '%.2f' ",isim,yas,boy);
    
    return 0;
}