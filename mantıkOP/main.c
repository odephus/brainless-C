#include<stdio.h>
#include<locale.h>
#include<string.h> 
#include<stdbool.h>

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    float temp = 25;

    // && bu 'AND' operatoru bir de 'OR' var o da asagida tm?

    if(temp >= 0 && temp <= 14){
        printf("Hava biraz serin olabilir...\n");
    }
    else if(temp >= 15 && temp <= 30){
        printf("Hava gaayet hojdur mıgo yaa\n");
    }
    else if (temp >=31){
        printf("Aman çık gız ordan ... yanar\n");
    } 
    
    return 0;
}