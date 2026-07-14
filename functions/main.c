#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

/*void nerdesin(){
    printf("\nGonyay olundayım gardaş\n");
}*/

void birthday(char name[],int age){ //veri türü belirtmezsen ZORT olur 
    printf("İyi ki doğdun %s\n",name); // bu arada ki ayrı yazılır 
    printf("%d yaşına girdin sonunda\n",age);
}

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    //nerdesin(); // bunu bi kac kez daya hazdircam

    /*for( int i = 0; i<=9; i++){ //9 yazarsan 10, 10 yazarsan 11 neden yazılımda saymaya 0 dan baslani yani 'N' tam sayilar
        nerdesin();
    }*/

    char name[15] = "Alper"; //bu arada degisken yok parametreler aynı isimde olmak zorunda değil fonk. belirteç yani
    int age = 21;

    birthday(name,age);
    printf("\n\n");
    birthday("Dalbayob-C",20);

    return 0;
}