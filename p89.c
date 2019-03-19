#include<stdio.h>
int main()
{
    int n,k,i,fact=1,c,m,j,fact1=1;
    scanf("%d%d",&n,&k);
    c=n-k;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    for(j=1;j<=c;j++)
    {
        fact1=fact1*j;
    }
    m=fact/fact1;
    printf("%d",m);
}
