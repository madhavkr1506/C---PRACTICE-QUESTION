// write a program to print your name date of birth and mobile number.
#include<stdio.h>
int main(){
    char name[10];
    int date,month,year;
    long double mob_no;
    printf("Name: ");
    gets(name);
    printf("Date: ");
    scanf("%d", &date);
    printf("Month: ");
    scanf("%d", &month);
    printf("Year: ");
    scanf("%d", &year);
    printf("Mob_no: ");
    scanf("%lf", &mob_no);
    printf("Name :  %s \nDOB : %d/%d/%d \nMobile : %.lf", name, date, month, year, mob_no);
return 0;
}