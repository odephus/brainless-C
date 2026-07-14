#include<stdio.h>
#include<locale.h>
#include<string.h> // -> unutma string işleri için mutlak bir kütüphane
#include<stdbool.h>

/*
double square(double x){
    double result = x*x;

    return result; //return kullancaksan void olmaz neyi dondurcen int se int, double ise double
}*/

double square(double x){
    return x*x;
}

int main(){
    setlocale(LC_ALL,"tr_TR.UTF8");
    double a = square(3.2);
    printf("%lf",a);
    
    return 0; 
}