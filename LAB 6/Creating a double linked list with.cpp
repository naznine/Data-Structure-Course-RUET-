#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *h,*p,*q,*t;

void Create(int n)
{
    int i,x;
    h = NULL;
    q = NULL;

    for(i=0;i<n;i++)
    {
        p = new Node;

        cout<<"Enter element: "<<endl;
        cin>>x;

        p -> data=x;

        if(h == NULL)
        {
            h=p;
            p->prev=NULL;
        }
        if(q != NULL)
        {
            q->next=p;
            p->prev=q;
        }
        q=p;
    }
    t=q;
    q->next=0;
}
void DisplayForward()
{
    p=h;
    printf("\nThe list is..(Forward Traverse):\n");
    while(p!=NULL)
    {
        printf("-->%d ",p->data);
        p=p->next;
    }
}

void DisplayBackward()
{
    p=t;
    printf("\nThe list is..(Backward Traverse):\n");
    while(p!=NULL)
    {
        printf("%d<--",p->data);
        p=p->prev;
    }
}

void Insert()
{
    int y,x;
    q=h;
    cout<<"\nAfter which element:"<<endl;
    cin>>y;
    while(q!=NULL)
    {
        if(q->data==y)
        {
            cout<<"Enter element:"<<endl;
            cin>>x;
            p=new Node;
            p->data=x;
            p->next=q->next;
            q->next=p;
            break;
        }
        else
            q=q->next;
    }
}
int main()
{
    int n;
    cin>>n;
    Create(n);
    DisplayForward();
    DisplayBackward();
    //Insert();
    //Display();

    return 0;
}

