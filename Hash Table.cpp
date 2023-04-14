#include<bits/stdc++.h>
using namespace std;

int i,n=10;
struct node
{
    int data;
    struct node *next;
};

struct node *a[10],*p;

void display()
{
    int i;
    for(i=0;i<n;i++)
    {
        p=a[i];
        printf("\na[%d]",i);
        while(p!=0)
        {
            printf("->%d",p->data);
            p=p->next;
        }
        printf("\n");
    }
}
int main()
{
    int k,j;
    for(i=0;i<n;i++)
        a[i]=0;
    for(;;)
    {
       printf("Enter your number:");
       scanf("%d",&k);
       if(k<0)
            break;
       j=k%n;
       p=(struct node*)malloc(sizeof(struct node));
       p->data=k;
       p->next=a[j];
       a[j]=p;
       display();
    }
}
