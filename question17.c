// write a c program to convert temperature from farahenheit to celcius.
#include<stdio.h>
int main(){
    float celcius,farahenheit;
    printf("enter temperature in farahenheit = ");
    scanf("%f",&farahenheit);
    celcius=(farahenheit-32)*5/9;
    printf("%.2f farahenheit = %.2f celcius",farahenheit,celcius);
return 0;
}