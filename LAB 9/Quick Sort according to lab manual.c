#include<stdio.h>
int partition(int a[],int p,int r)
{
    int x,i,j,temp,k;
    x=a[r];
    for(i=p-1,j=p;j<r;j++)
    {
        //printf("i= %d j=%d \n",i,j);
        if(a[j]<x)
        {
            i+=1;
            //printf("a[j]=%d x=%d i=%d\n",a[j],x,i);
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    temp=a[r];
    a[r]=a[i+1];
    a[i+1]=temp;
    return i+1;
}

void quick_sort(int a[],int p,int r)
{
    if(p>=r)
    {
        return ;
    }
    int q;
    q=partition(a,p,r);
    quick_sort(a,p,q-1);
    quick_sort(a,q+1,r);
}

int main()
{
    int i,n=7;
    //int a[]={2,8,6,3,1,5,9,4,7};
    //int a[]={9,8,7,6,5,4,3,2,1};
    int a[]={1,5,6,3,8,4,7,2};
    quick_sort(a,0,n);
    printf("The sorted array is:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
