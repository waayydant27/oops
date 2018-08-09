#include<stdio.h>
#include"headernew.h"
#include<malloc.h>
void main()
{
        int i,key,j,*a,n;
        printf("enter the size");
        scanf("%d",&n);
        a=rdm(n);
        for(i=1;i<=(n-1);i++)
        {
            key=a[i];
            j=i-1;
            while(j>=0 && a[j]>key)
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=key;

        }
        for(i=0;i<n;i++)
        printf("\n%d",a[i]);
}
