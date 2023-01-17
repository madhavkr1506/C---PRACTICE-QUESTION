// c program to calculate simple interest.
#include<stdio.h>
int main(){
    float principal,rate,time,simple_interest;
    printf("enter principal ammount = ");
    scanf("%f",&principal);
    printf("enter rate = ");
    scanf("%f",&rate);
    printf("enter time = ");
    scanf("%f",&time);
    simple_interest=(principal*rate*time)/100;
    printf("simple interest = %.3f",simple_interest);
return 0;
}