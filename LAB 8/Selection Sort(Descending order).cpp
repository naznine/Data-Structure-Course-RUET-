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
    for(i=1;i<5;i++)
    {
        k=i;
        for(j=i+1;j<=5;j++)
        {
            if(a[j]>a[k])
                k=j;
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
        printf("Step-%d: ",i+1);
        for(int l=1;l<=5;l++)
        {
            printf("%d ",a[l]);
        }
        printf("\n");
    }
    for(int k=1;k<=5;k++)
    {
        printf("%d ",a[k]);
    }
}
