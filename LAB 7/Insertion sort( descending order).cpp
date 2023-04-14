#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int a[10]={20,40,15,30,10};
    int i,j,key,k,a[10];
    for(i=1;i<=5;i++)
        scanf("%d",&a[i]);
    for(i=2;i<=5;i++)
    {
        key=a[i];
        j=i-1;
        while(j>0 && a[j]<key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    //for(k=1;k<=5;k++)
        //printf("%d ",a[k]);
    //printf("\n");
    }
    printf("\n");
    for(i=1;i<=5;i++)
        printf("%d ",a[i]);
}
