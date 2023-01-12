// write a program to print factorial of a number.
#include<stdio.h>
#include<stdio.h>
int main(){
    int num;
    printf("enter num = ");
    scanf("%d",&num);
    int i=1;
    int fact=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("factorial of %d is = %d",num,fact);
return 0;
}