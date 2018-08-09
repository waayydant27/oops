int *rdm(int n)
{
    int *a;int i;
    a=(int*)malloc(n*sizeof(int));
    srand(time(NULL));
    for(i=0;i<n;i++)
        *(a+i)=rand()%100;
    return a;
}
