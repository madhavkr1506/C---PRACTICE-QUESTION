// write a c program to convert temperature from degree celcius to farahenheit.
#include<stdio.h>
int main(){
    float celcius,farahenheit;
    printf("enter temperature in celcius = ");
    scanf("%f",&celcius);
    farahenheit=(celcius*9/5)+32;
    printf("%.2f celcius = %.2f farahenheit",celcius,farahenheit);
return 0;
}