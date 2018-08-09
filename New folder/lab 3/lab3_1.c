#include<stdio.h>
void main()
{
int a[5][5],n,i,j;
printf("enter the limit");
scanf("%d",&n);
printf("enter matrix");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
symmetric(a,n);
}
void symmetric(int a[5][5],int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(a[i][j]!=a[j][i])
{
printf("not symmetric");
exit(0);
}
}
}
printf("symmetric");
}
