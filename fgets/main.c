#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    char name[20]; int age; // name *-*

    printf("Adın ne senin koçum? > ");
    fgets(name,20,stdin); //bak burada & adres bildirmeden direkt yazioz ii hoş sonra kaç byte biz yirmi ayarladik 
    //*-* işareti ile takiple ve standart input VE BU ARADA 'sizeof(name)' diyebilirsin 20 yerine
    name[strlen(name)-1] = '\0'; //aga fgets oto space dürzülüğü yapio biz onu kaldirdik tm?

    printf("Tanıştıma memnum oldum koçum '%s'",name);

    return 0;
}