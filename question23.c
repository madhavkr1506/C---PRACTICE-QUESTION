// c program to find maximum and minimum elements from an array.
#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements that you want to enter in an array = ");
    scanf("%d",&size);
    int array[size];
    for (int i=0;i<size;i++){
        printf("the %d index of element = ",i);
        scanf("%d",&array[i]);
    }
    printf("\narray are : \n");
    for (int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
    int max=array[0];
    int min=array[0];
    for (int i=0;i<size;i++){
        if (array[i]>max){
            max=array[i];
        }
        if (array[i]<min){
            min=array[i];
        }
    }
    printf("maximum element of an array = %d\n",max);
    printf("minimum element of an array = %d\n",min);
return 0;
}