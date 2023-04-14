#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],temp;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("Step-%d: ",i+1);
        for(int k=0;k<n;k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    printf("Final sort: ");
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}

