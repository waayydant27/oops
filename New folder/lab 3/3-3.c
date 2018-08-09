#include<stdio.h>
void main()
{
    int a[5],i,c,p=0;
    printf("enter the array");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be searched");
    scanf("%d",&c);

    for(i=0;i<5;i++)
        if (c==a[i])
            p++;
      if(p>0)
          printf("element present");
    else
        printf("not present");
}
