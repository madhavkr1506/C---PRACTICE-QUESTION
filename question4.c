// print a factorial number using function.
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter number = ");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,function(num));
return 0;
}
int function(int num){
    int i=1;
    int fact=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    return fact;
}