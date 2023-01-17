// c program to find maximum between three number using nested if.
#include<stdio.h>
int main(){
    int num1,num2,num3,max,min;
    printf("num1 = ");
    scanf("%d",&num1);
    printf("num2 = ");
    scanf("%d",&num2);
    printf("num3 = ");
    scanf("%d",&num3);
    if (num1>num2){
        if(num1>num3){
            max=num1;
        }
        else{
            max=num3;
        }
    }
    else{
        if (num2>num3){
            max=num2;
        }
        else{
            max=num3;
        }
    }

    if (num1<num2){
        if(num1<num3){
            min=num1;
        }
        else{
            min=num3;
        }
    }
    else{
        if (num2<num3){
            min=num2;
        }
        else{
            min=num3;
        }
    }
    printf("maximum number = %d\n",max);
    printf("minimum number = %d",min);
return 0;
}