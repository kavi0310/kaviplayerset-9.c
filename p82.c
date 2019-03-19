#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int a[1000],i,n,add;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n!=1)
    {
    for(i=0;i<n;i++)
    {
    add=a[i]&a[i+1];
    break;
    }
    printf("%d",add);
    }
    else
    printf("%d",a[0]);
}
