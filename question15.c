// write a c program to enter length and breadth of a rectangle and calculate its area and perimeter.
#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("enter length of a rectangle = ");
    scanf("%d",&length);
    printf("enter breadth of a rectangle = ");
    scanf("%d",&breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;
    printf("perimeter of a rectangle is = %d\n",perimeter);
    printf("area of a ractangle is = %d\n",area);
return 0;
}