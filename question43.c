#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num,temp,sum=0,digit;
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        digit=temp%10;
        sum+=digit;
        temp/=10;
    }
    printf("%d\n",sum);
return 0;
}