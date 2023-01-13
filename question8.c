// write a c program to check whether a number is armstrong or not.
#include<stdio.h>
int main(){
    int num;
    printf("enter number to check whether it is armstrong or not = ");
    scanf("%d",&num);
    if (armstrong(num)==0){
        printf("%d is an armstrong number.",num);
    }
    else{
        printf("%d is not an armstrong number.",num);
    }
return 0;
}
int armstrong(int num1){
    int res=0,temp,sum=0;
    temp=num1;
    while(num1>0){
        res=num1%10;
        sum=sum+(res*res*res);
        num1=num1/10;
    }
    if (temp==sum){
        return 0;
    }
    else{
        return 1;
    }
}
