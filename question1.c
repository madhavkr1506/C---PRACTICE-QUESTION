// print multiplication of a table.
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter num = ");
    scanf("%d",&num);
    int i=1;
    while(i<=10){
        printf("%d x %d = %d \n",num,i,(num*i));
        i++;
    }
return 0;
}
