#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

// koşul ? a : b ; olay bu. benim fav operatorlerden valla

int findMax(int x, int y){
    /*if (x>y){
        return x;
    }else{
        return y;
    }*/

    return(x>y)? x : y;
}

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    /*int age = 17;
    printf("\nage: %d\n\n",age);
    (age >= 18) ? printf("Alkol alabilir.\n") : printf("Alkol ALAMAAAZ!!\n\n"); */ //aaaa alt kısmı yutupdan caldım tm

    int max = findMax(7,2);
    printf("%d",max);
    
    return 0;
}