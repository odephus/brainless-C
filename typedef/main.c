#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

typedef int Milisaniye; //int adına alias dedigimiz takma ad atadık yani Milisaniye artık bir int
typedef char model[20];
typedef bool satistami; 
typedef char durum[5];

struct arac {
    model model;
    Milisaniye baslangic;
    satistami eol; //end of life bu amk sormayın sonra eol ne diye
    durum durum;
};


int main() {
    setlocale(LC_ALL,"tr_TR.UTF8");
    
    /*
    Milisaniye beklemeSuresi = 600;
    Milisaniye baslangicSuresi = 1200;

    printf("Araç başlangıç süresi: %d ms\n",baslangicSuresi);
    printf("Araç başladıktan sonraki bekleme süresi: %d ms\n",beklemeSuresi); */

    struct arac bmw;
    strcpy(bmw.model,"BMW 520i");
    bmw.baslangic = 1700;
    bmw.eol = false;
    if (bmw.eol == 1){
        strcpy(bmw.durum,"EVET");
    } else {strcpy(bmw.durum,"HAYIR");}

    struct arac audi;
    strcpy(audi.model,"Audi RS3");
    audi.baslangic = 1473;
    audi.eol = true;
    if (audi.eol == 1){
        strcpy(audi.durum,"EVET");
    } else {strcpy(audi.durum,"HAYIR");} // burada gemini'ye kodu attım ne önerebilirsin diye ve aga neden tenary kullanmadın dedi

    struct arac porsche;
    strcpy(porsche.model,"Taycan");
    porsche.baslangic = (1242);
    porsche.eol = false;


    printf("Araç: '%s' | Araç başlatma süresi: %d'ms | Araç satışta mı?: %s \n\n",bmw.model,bmw.baslangic,bmw.durum);
    printf("Araç: '%s' | Araç başlatma süresi: %d'ms | Araç satışta mı?: %s \n\n",audi.model,audi.baslangic,audi.durum);
    printf("Araç: '%s' | Araç başlatma süresi: %d'ms | Araç satışta mı?: %s \n\n",porsche.model,porsche.baslangic,porsche.eol?"EVET":"HAYIR");
    

    return 0;
}