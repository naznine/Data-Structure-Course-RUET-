#include<stdio.h>
int m,h,l,i;
int a[8]={25,12,15,30,40,20,11,10},b[8];
void merging(int l,int m,int h)
{
    int l1=l,l2=m+1;
    for(i=0;(l1<=m&l2<=h);i++)
    {
        if(a[l1]<a[l2])
        {
            b[i]=a[l1];
            l1++;
        }
        else
        {
            b[i]=a[l2];
            l2++;

        }
    }
    if(l1<=m)
    {
        b[i]=a[l1];
        i++;
        l1++;
    }
    else
    {
       if(l2<h){
        b[i]=a[l2];
        i++;
        l2++;
       }

       for(i=l;i<=h;i++)
        a[i]=b[i];

       printf("After sorting: ");
       for(i=0;i<8;i++)
        printf("%d ",a[i]);


    }

 return;
}

void sort(int l,int h)
{
    if(l<h)
    {
      m=(l+h)/2;
      sort(l,m);
      sort(m+1,h);
      merging(l,m,h);
    }
    return;
}
int main()
{

    printf("The array is: ");
    for(i=0;i<8;i++)
        printf("%d ",a[i]);
    sort(0,7);

}
