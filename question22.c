// c program to delete an element from an array at specific position.
#include<stdio.h>
int main(){
    int size,pos;
    printf("enter number of element that you want to enter in ana array = ");
    scanf("%d",&size);
    int array[size];
    for (int i=0;i<size;i++){
        printf("enter %d index of element = ",i);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<size;i++){
        printf("%d \t",array[i]);
    }
    printf("\n");
    printf("enter position of that element you want to delete = ");
    scanf("%d",&pos);
    if (pos<0 || pos>size){
        printf("please enter correct position !:)");
    }
    else{
        for(int i=pos-1;i<size-1;i++){
            array[i]=array[i+1];
        }
        size--;
        printf("elements after deletion are : \n");
        for (int i=0;i<size;i++){
            printf("%d\t",array[i]);
        }
    }
return 0;
}