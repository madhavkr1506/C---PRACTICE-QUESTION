#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int l,r,k,i=0,count=0;
    scanf("%d %d %d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        count++;
    }
    printf("%d",count);
    return 0;
}

