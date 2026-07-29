#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdbool.h>

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");

    char *inmyhead[] = {"Ceg","Aspova","Kayra","Sansar","Grejuva","Hidra","3B","Neo1","Çağrı.S","Şanışer","SokratST"};

    int ioa = sizeof(inmyhead) /sizeof(inmyhead[0]); //ioa -> index of array

    for(int i = 0;i<ioa;i++){
        printf("'%s' is IN MY HEAD!\n",inmyhead[i]);
    }
    return 0;
}