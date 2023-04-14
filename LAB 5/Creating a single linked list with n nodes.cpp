#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *h;

void Create(int n)
{
    struct Node *p,*q;
    int i,x;
    h = 0;
    q = 0;

    for(i=0;i<n;i++)
    {
        p = new Node;

        cout<<"Enter element: "<<endl;
        cin>>x;

        p -> data=x;

        if(h == 0)
            h = p;
        if(q != 0)
            q->next=p;

        q=p;
        //cout<<q<<" "<<q->next<<endl;
    }
    q->next=0;
    //cout<<q<<" "<<q->next<<endl;
}
void Display()
{
    struct Node *p;
    p=h;
    printf("\nThe list is..\n");
    while(p!=0)
    {
        printf("-->%d ",p->data);
        p=p->next;
    }
}

void Insert()
{
    int y,x;
    struct Node *p,*q;
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
    Display();
    Insert();
    Display();

    return 0;
}

