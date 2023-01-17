// c exercise : print the employee's id and salary of a particular month.
#include<stdio.h>
int main(){
    int hours;
    double value,salary;
    char id[100];
    printf("input the employee id : ");
    scanf("%s",&id);
    printf("input the working hours : ");
    scanf("%d",&hours);
    printf("salary amount/hour : ");
    scanf("%lf",&value);
    salary=hours*value;
    printf("employee id : %s\n",id);
    printf("salary : USD %.2lf\n",salary);
return 0;
}