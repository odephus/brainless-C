#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdbool.h>

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    char unit;
    float temp;

    printf("Agacım sıcaklık birimini girebilir misin? (F) | (C) \n>> ");
    scanf("%c",&unit);   
    unit = toupper(); 

    if (unit == 'C' || unit == 'c'){
        printf("'Celcius' cinsinden sıcaklığı giriniz:  ");
        scanf("%f",&temp);
        temp = (temp * 9/5) + 32;
        printf("Sıcaklık: Fahreneit cinsinden: %.2f\n",temp);
    }

    else if (unit == 'F' || unit == 'f'){
        printf("'Fahreneit' cinsinden sıcaklığı giriniz:  ");
        scanf("%f",&temp);
        temp = ((temp -32) *5)/9;
        printf("Sıcaklık: Celcius cinsinden: %.2f\n",temp);
    } else {
        printf("Kanka şey '%c' geçerli bi deger değil btw\n");
    }
    return 0;
}