// write c program to find all angels of a given triangle if two angles are given.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter angle a = ");
    scanf("%d",&a);
    printf("enter angle b = ");
    scanf("%d",&b);
    c=180-(a+b);
    printf("all angles of a given triangle are %d, %d, %d",a,b,c);
return 0;
}