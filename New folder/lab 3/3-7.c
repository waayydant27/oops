#include<stdio.h>
#include<malloc.h>
#include<math.h>
int* rdm(int);
int main()
{
    int *p,l,n;
    printf("enter number");
    scanf("%d",&n);
    p=rdm(n);
    for(l=0;l<n;l++)
        printf("\n%d",p[l]);

}
int *rdm(int n)
{
    int *a;int i;
    a=(int*)malloc(n*sizeof(int));
    srand(time(NULL));
    for(i=0;i<n;i++)
        *(a+i)=rand()%100;
    return a;
}
