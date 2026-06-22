#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    //char name[20]; //aga derleyicim bi hata verio konuyu degistiricez mecburen
    /*fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';*/
    char not;
    printf("Lütfen sınav notunuzu girin. > ");
    scanf("%d",&not);

    switch (not)
    {
    case 90 ... 100:
        printf("Harf notu 'AA'\n");
        break;
    case 85 ... 89:
        printf("Harf notu 'BA'\n");
        break;
    case 80 ... 84:
        printf("Harf notu: BB\n");
        break;
    default:
        printf("NOT GİR LA\n");
        break;
    }


    
    return 0;
}