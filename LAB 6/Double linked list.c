#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
    Node *prev;
};
Node *h;
int create(int n)
{
    Node *p,*q;
    int i,x;
    h=0;q=0;
    for (i=0;i<n;i++)
    {
        p=(Node *)malloc(sizeof(Node));
        printf("Enter the number: ");
        scanf("%d",&x);
        p->data=x;
        if (h==0)
        {
            h=p;
            p->prev=0;
        }
        if (q!=0)
        {
            q->next=p;
            p->prev=q;
        }
        q=p;
    }
    q->next=0;
    printf("\n");
}
int display()
{
    Node  *p;
    p=h;
    while(1)
    {
        if (p==0)
            break;
        printf("%d",p->data);
        p=p->next;
        if (p!=0)
            printf("  ->  ");
    }
    printf("\n");
}
int insert()
{
    Node *q,*p,*m;
    int x,y,z;
    q=h;
    printf("\n1. before\n2. After\n");
    scanf("%d",&z);
    if (z==2)
    {
        printf("Enter the number after what u want to put ur number: ");
        scanf("%d",&y);
        while(1)
        {
            if (q==0)
                break;
            if (q->data!=y)
            {
                q=q->next;
                continue;
            }
            else
            {
                p= (Node *)malloc(sizeof(Node));
                printf("Enter the number: ");
                scanf("%d",&x);
                p->data=x;
                p->next=q->next;
                q->next=p;
                break;
            }
        }
    }
    if (z==1)
    {
        printf("Enter the number before what u want to put ur number: ");
        scanf("%d",&y);
        while(1)
        {
            if (q==0)
                break;
            if (q->data!=y)
            {
                q=q->next;
                continue;
            }
            else
            {
                p= (Node *)malloc(sizeof(Node));
                printf("Enter the number: ");
                scanf("%d",&x);
                p->data=x;
                p->next=q;
                p->prev=q->prev;
                m=q->prev;
                q->prev=p;
                m->next=p;
                break;
            }
        }
    }
}
int del()
{
    Node *p,*q;
    q=h,p=0;
    int y,i;
    printf("Enter the element you want to delete: ");
    scanf("%d",&y);
    while(1)
    {
        if (q==0)
            break;
        if (q->data==y)
        {
            if (q==h)
                h=h->next;
            else
                p->next=q->next;
            break;
        }
        else
            p=q;
        q=q->next;
    }
}
int main()
{
    int x,y,i;
    while(1)
    {
        printf("1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit\n");
        scanf("%d",&x);
        if (x==1)
        {
            printf("Enter the number of elements: ");
            scanf("%d",&y);
            create(y);
        }
        else if (x==2)
        {
            insert();
        }
        else if (x==3)
        {
            del();
        }
        else if (x==4)
            display();
        else if (x==5)
            break;
    }
}
