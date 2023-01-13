// write a program to reverse a string using library function.
#include<stdio.h>
int main(){
    char name[100];
    printf("enter name : ");
    scanf("%s",&name);
    printf("reversed : %s",strrev(name));
return 0;
}