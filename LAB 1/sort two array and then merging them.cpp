#include<iostream>
using namespace std;
int main()
{
    int a[20],b[20],n,m,i,j,k,tem;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=0;j<m;j++)
        cin>>b[j];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[j]<a[i])
    {
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;
    }
    for(i=0;i<m-1;i++)
        for(j=i+1;j<m;j++)
            if(b[j]<b[i])
    {
        tem=b[i];
        b[i]=b[j];
        b[j]=tem;
    }

    int arr[1000];
    i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            arr[k++]=a[i++];
        else
            arr[k++]=b[j++];
    }
    while(i<n)
        arr[k++]=a[i++];
    while(j<m)
        arr[k++]=b[j++];

    for(i=0;i<n+m;i++)
        cout<<arr[i]<<" ";

    return 0;
}
