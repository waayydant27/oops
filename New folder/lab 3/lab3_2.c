#include<stdio.h>
void main()
{
int r,b[10],x,i,l;
printf("enter limit of the array\n");
scanf("%d",&x);
printf("enter array\n");
for(i=0;i<x;i++)
scanf("%d",&b[i]);
printf("enter number to be searched\n");
scanf("%d",&l);
r=lsearch(b,x,l);
if(r!=0)
printf("number found in the array");
else
printf("number not found in the array");
}
int lsearch(int a[],int n,int m)
{
int c=0,i;
for(i=0;i<n;i++)
{
if(a[i]==m)
{
c++;
break;
}
}
return c;
}
