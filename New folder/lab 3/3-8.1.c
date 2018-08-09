#include<stdio.h>
void main()
{
    int i,j,a[5],min,temp;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=(5-2);i++)
    {
        min=i;
        for(j=i+1;j<=(5-1);j++)
            if(a[min]>a[j])
                min=j;
        temp= a[min];
        a[min]=a[i];
        a[i]=temp;

    }
    for(i=0;i<5;i++)
        printf("\n%d",a[i]);
}
