#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *h,*p,*q,*r;
int enqueue(int x)
{
    int i,j,k;
    p=(Node *)malloc(sizeof(Node));
    p->data=x;
    if (h==0)
    {
        h=p;
        q=p;
        q->next=0;
        printf("\n");
        return 0;
    }
    q->next=p;
    q=p;
    q->next=0;
    printf("\n");
}
int dequeue()
{
    if (h==0)
    {
        printf("Queue is empty!\n");
        return 0;
    }
    printf("The number is: %d\n",h->data);
    if (h->next==0)
    {
        printf("Queue is empty!\n");
        h=0;
        q=0;
        return 0;
    }
    h=h->next;
}
int display()
{
    if (h==0)
    {
        printf("Queue is empty\n");
        return 0;
    }
    r=h;
    printf("The Queue is:\n");
    while(1)
    {
        printf("%d\t",r->data);
        if (r==q)
        {
            printf("\n");
            return 0;
        }
        r=r->next;
    }
}
int main()
{
    int a,b,c;
    while(1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d",&a);
        if (a==1)
        {
            printf("Enter the number: ");
            scanf("%d",&b);
            enqueue(b);
        }
        else if (a==2)
        {
            dequeue();
        }
        else if (a==3)
        {
            display();
        }
        else if (a==4)
        {
            break;
        }
    }
}
