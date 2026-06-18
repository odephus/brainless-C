#include<stdio.h>
#include<locale.h>
#include<string.h>

struct araba {
    char model[20];
    int modelYear;

};

int main() {
    setlocale(LC_ALL,"tr_TR.UTF8");
    struct araba arac;

    strcpy(arac.model, "Audi");
    arac.modelYear = 2025;

    printf("Araç modeli: '%s' \n",arac.model);
    printf("Araç model yılı: '%d' \n",arac.modelYear);
    //2 farklı arac tanımladık ve bence bu bir amelelik ama typedef struct kısmında gelicez buraya da o ileriki bir konu
    struct araba arac2;

    strcpy(arac2.model, "Porsche");
    arac2.modelYear = 2026;

    printf("Araç modeli: '%s' \n",arac2.model);
    printf("Araç model yılı: '%d' \n",arac2.modelYear);

    return 0;
}