#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b[30000];
    /*clock_t start,end;
    double cpu_time_used;
    start=clock();*/

    int i,j,k,position,temp;
    for(i=0;i<5;i++)
    {
        scanf("%d\n",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        position=i;
        for(j=i+1;j<5;j++)
        {
            if(b[position]>b[j])
            {
                position=j;
            }
        }
        if(position!=i)
        {
            temp=b[i];
            b[i]=b[position];
            b[position]=temp;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
    /*end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("The time for this sort is %f microseconds\n",cpu_time_used);*/

}
