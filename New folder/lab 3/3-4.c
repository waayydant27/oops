#include<stdio.h>
void main()
{
    int a[5],i,j,c=0;
    printf("enter elements of array");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);

    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
            if(a[i]==a[i+1])
                c++;
    }
    if(c>0)
        printf("duplicate elements are present");
    else
        printf("no duplicate element");


}
