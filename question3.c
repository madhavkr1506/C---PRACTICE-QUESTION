// write a program to print sum of n natural number.
#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,i=0;
    printf("enter num = ");
    scanf("%d",&num);
    while(i<=num){
        sum=sum+i;
        i++;
    }
    printf("sum is = %d",sum);
return 0;
}
