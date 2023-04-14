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
            //p->prev=NULL;
        }
        if(q != NULL)
        {
            q->next=p;
            p->prev=q;
        }
        q=p;
    }
    t=q;
    q->next=h;
    h->prev=t;
}
void DisplayForward()
{
    p=h;
    int cnt=0;
    printf("\nThe list is..(Forward Traverse):\n");
    while(p!=h || cnt==0)
    {
        cnt=1;
        printf("-->%d ",p->data);
        p=p->next;
    }
    printf("-->%d ",p->data);
}

void DisplayBackward()
{
    p=t;
    int cnt=0;
    printf("\nThe list is..(Backward Traverse):\n");
    while(p!=t || cnt==0)
    {
        cnt=1;
        printf("%d<--",p->data);
        p=p->prev;
    }
    printf("%d<--",p->data);
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

