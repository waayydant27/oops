#include<stdio.h>
void main()
{
 int a[5],i,j,k,max=0;
 printf("enter elememts of array");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 for(i=0;i<5;i++)//printf("%d",a[j]);
 {
 for(j=0;j<5;j++)
   {
    if(a[j]>a[j+1])
    {
     max=a[j];
     a[j]=a[j+1];
     a[j+1]=max;//printf("%d",a[j]);

    }
    //printf("%d",a[j]);
    }//printf("\bn%d",a[j]);
   }
   printf("greatest element = %d",a[4]);
   }
