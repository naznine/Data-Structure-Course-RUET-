#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
node *h;
void create()
{
    int x,n;
    struct node *p,*q;
    h=NULL;
    q=NULL;
    printf("How many nodes to create ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        p=new node;
        printf("Enter the value: ");
        scanf("%d",&x);
        p->data=x;
        if(h==NULL)
        {
            h=p;
        }
        if(q!=NULL)
        {
            q->next=p;
        }
        q=p;
    }
    q->next=NULL;
}

void Delete()
{
    node *q,*p;
    int x;
    printf("Which element:");
    scanf("%d",&x);
    q=h;
    while(q!=NULL)
    {
        if(q->data!=x)
        {
            p=q;
            p=p->next;
        }
        else
        {
            if(q==h)
            {
                h=h->next;
            }
            else
            {
                p->next=q->next;
            }
        }
    }
}
void display()
{
    printf("Display:\n");
    node *p;
    p=h;
    while(p!=NULL)
    {
        printf("->%d ",p->data);
        p=p->next;
    }
}


int main()
{
    create();
    display();
    Delete();
    display();

    return 0;
}
