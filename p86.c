#include<stdio.h>
int main()
{
    int n,a[1000],i,xor,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
       xor=a[i]^a[j];
        //printf("%d\n",xor);
        }
    }
    printf("%d",xor);
}
