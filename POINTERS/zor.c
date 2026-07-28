#include <stdio.h>
#include <string.h>
#define vo void

int main() {
    char metin[] = "ALPER";
    char *ptr = metin;
    //printf("%s",metin+4); -> R

    for (int i = 4; i >= 0; i--){
        //printf("%d\n",i);
        printf("%c",*(ptr + i));
    }
    return 0;
}