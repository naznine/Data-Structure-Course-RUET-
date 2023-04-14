#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100]={'\0'},n,i,m,ins,pos,b[10],del,j,k,l=0;
    for(i=0;i<=i;i++)
    {
        printf("Enter your option:\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&n);
        if(n==1)
        {
            printf("Enter the element u want to insert:\n");
            scanf("%d",&ins);
            l=0;
            a[l]=ins;
            l++;
        }
    if(n==2)
    {

        if(l==0)
                printf("Array is empty....\n");
        printf("Enter the element you want to delete:\n");
        scanf("%d",&del);
        for(j=0;j<l;j++)
            if(a[j]==del)
                k=j;
        for(j=k;j<l-1;j++)
            a[j]=a[j+1];
        l--;
    }
    if(n==3)
    {
        if(l==0)
            printf("Array is empty...");
        for(j=0;j<l;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
    if(n==4)
        break;
    }


}
