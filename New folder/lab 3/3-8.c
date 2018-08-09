#include<stdio.h>
#include<malloc.h>
#include"headernew.h"
void main()
{
    int i,min=1,j,temp,*a,n;
    printf("enter the size");
    scanf("%d",&n);
    a=rdm(n);
    for(i=0;i<=(n-2);i++)
    {
        min=i;
        for(j=i+1;j<=(n-1);j++)
            if(a[min]>a[j])
                min=j;
        temp= a[min];
        a[min]=a[i];
        a[i]=temp;

    }
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);


}
