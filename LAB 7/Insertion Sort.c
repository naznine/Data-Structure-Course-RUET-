#include<stdio.h>
int main()
{
    int a[10];
    int i,j,key,k;
    for(i=1;i<=5;i++)
        scanf("%d",&a[i]);
    for(i=2;i<=5;i++)
    {
        key=a[i];
        j=i-1;
        printf("i= %d j= %d key= %d a[j]= %d\n",i,j,key,a[j]);
        while(j>0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
            printf("i= %d j= %d key= %d a[j]= %d\n",i,j,key,a[j]);
        }
        a[j+1]=key;

    for(k=1;k<=5;k++)
        printf("%d ",a[k]);
    printf("\n");
    }
    for(i=1;i<=5;i++)
        printf("%d ",a[i]);

    return 0;
}
