#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],k,temp,i,j;

    //scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<5;j++)
    {
        k=j;
        for(i=j+1;i<=5;i++)
        {
            if(a[i]<a[k])
                k=i;
        }
        temp=a[j];
        a[j]=a[k];
        a[k]=temp;
    }
    for(int k=1;k<=5;k++)
    {
        printf("%d ",a[k]);
    }
}
