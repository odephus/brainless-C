#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    int age;
    printf("Enter the eyc(age) bırooo: ");
    scanf("%d",&age); //-> burda diomki bak int die bi değer yarattım buradaki inputu onun içöine koy
    //asm dili ile | mov age, input

    if (age >= 18)
    {
        printf("Şahıs kişisi Alkol alabilir \n");
    } else if (age >= 16 && age < 18){
        printf("Bence ebeveyn denetiminde alkol tüketilebilir \nbir sorun yok \n");
    } else {
        printf("BÜyü de gel paşam hadi hadi uğraştırma bizi\n");
    }
    

    
    return 0;
}