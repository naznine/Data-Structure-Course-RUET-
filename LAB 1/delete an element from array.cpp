#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n,i,del;
    cout<<"Enter the array size:\n";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(i=1;i<=n;i++)
        cin>>a[i];
    cout<<"Old array\n";
    for(i=1;i<=n;i++)
        cout<<a[i]<<"  ";
    cout<<"\nEnter the element you want to delete:\n";
    cin>>del;
    for(i=1;i<=n;i++)
        if(a[i]!=del)
            cout<<a[i]<<"  ";

    return 0;
}
