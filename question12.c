// write a c program to convert specified days into years, weeks and days. note : ignore leap year.
#include<stdio.h>
int main(){
    int days,years,weeks;
    printf("enter number of days : ");
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("years : %d\n",years);
    printf("weeks : %d\n",weeks);
    printf("days : %d\n",days);
return 0;
}