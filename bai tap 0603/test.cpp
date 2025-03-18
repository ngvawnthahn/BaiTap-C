#include <stdio.h>
#include <stdlib.h>
int n,i,j,a[1000],t;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {scanf("%d",&a[i]);}
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}

