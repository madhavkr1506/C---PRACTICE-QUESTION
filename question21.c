// c program to calculate compound interest.
#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,compound_interest;
    printf("enter principal = ");
    scanf("%f",&principal);
    printf("enter rate = ");
    scanf("%f",&rate);
    printf("enter time = ");
    scanf("%f",&time);
    compound_interest=principal*(pow((1+rate/100),time));
    printf("compound interest = %.2f",compound_interest);
return 0;
}