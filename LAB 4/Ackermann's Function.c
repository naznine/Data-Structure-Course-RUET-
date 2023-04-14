#include<stdio.h>
int ackermann(int m,int n)
{
    if(m==0 && n>=0)
        return n+1;
    if(m>0 && n==0)
        ackermann(m-1,1);
    if(m>0 && n>0)
        ackermann((m-1),ackermann(m,n-1));
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",ackermann(m,n));
    return 0;
}
