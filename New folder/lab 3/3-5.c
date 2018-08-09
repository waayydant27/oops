#include<stdio.h>
void main()
{
    int a[5],i,j,c=1;
    printf("enter the elements of array");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
    {
        if(a[j]==a[j+1])
            c++;

    }
             printf("\nelement %d occurs %d times",a[i],c);
    }


}
