// c program to find square root a given number.
#include<stdio.h>
#include<math.h>
int main(){
    float num,root;
    printf("enter number = ");
    scanf("%f",&num);
    root=sqrt(num);
    printf("square root of given number is = %.5f",root);
return 0;
}