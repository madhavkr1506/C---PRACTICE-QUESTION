// print factorial of a number using recursion.
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter number = ");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,fact(num));
return 0;
}
int fact(int num){
    if (num ==0){
        return 1;
    }
    int numfact1=fact(num-1);
    int factnum=numfact1*num;
    return factnum;
}