#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,n,tem;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
        for(j=0;j<=n-2-i;j++)
    {
        if(a[j]>a[j+1])
        {
            tem=a[j];
            a[j]=a[j+1];
            a[j+1]=tem;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;

}
