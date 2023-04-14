#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n,i,ins,pos;
    cout<<"Enter the array size\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=1;i<=n;i++)
        cin>>a[i];
    cout<<"Old array\n";
    for(i=1;i<=n;i++)
        cout<<a[i]<<"  ";
    cout<<"\n\nEnter the element at which position you want to insert\n";
    cin>>ins>>pos;
    for(i=n+1;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=ins;
    cout<<"\n\nNew array\n";
    for(i=1;i<=n+1;i++)
        cout<<a[i]<<"  ";

    return 0;
}
