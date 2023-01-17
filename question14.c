// c program to find common elements from two array.
#include<stdio.h>
int if_exists(int z[],int u,int y){
    int i;
    if(u==0){
        return 0;
    }
    for (i=0;i<=u;i++){
        if(z[i]==y){
            return 1;
        }
        return 0;
    }
}
int main(){
    int a[10],b[10],c[10];
    int len1,len2;
    int i,j,k;
    k=0;
    printf("please enter the length of first array : \n");
    scanf("%d",&len1);
    printf("please enter the %d elements of first array : \n",len1);
    for (i=0;i<len1;i++){
        scanf("%d",&a[i]);
    }
    printf("please enter the length of second array : \n");
    scanf("%d",&len2);
    printf("please enter the %d elements of second array : \n",len2);
    for (i=0;i<len2;i++){
        scanf("%d",&b[i]);
    }
    k=0;
    for(i=0;i<len1;i++){
        for(j=0;j<len2;j++){
            if(a[i]==b[j]){
                if(!if_exists(c,k,a[i])){
                    c[k]=a[i];
                    k++;
                }
            }
        }
    }
    if (k>0){
        printf("common elements are : \n");
        for (i=0;i<k;i++){
            printf("%d\n",c[i]);
        }
    }
    else{
        printf("there are no common elements.\n");
    }
return 0;
}