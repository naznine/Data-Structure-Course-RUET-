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
    h = NULL;
    q = NULL;

    for(i=0;i<n;i++)
    {
        p = new Node;

        cout<<"Enter element: "<<endl;
        cin>>x;

        p -> data=x;

        if(h == NULL)
            h = p;
        if(q != NULL)
            q->next=p;

        q=p;
        //cout<<q<<" "<<q->next<<endl;
    }
    q->next=h;
    //cout<<q<<" "<<q->next<<endl;
}
void Display()
{
    struct Node *p;
    p=h;
    int cnt=0;
    printf("\nThe list is..\n");
    while(p!=h || cnt==0)
    {
        cnt=1;
        printf("-->%d ",p->data);
        p=p->next;
    }
    printf("-->%d ",p->data);
}

void Insert()
{
    int y,x,cnt=0;
    struct Node *p,*q;
    q=h;

    cout<<"\nAfter which element:"<<endl;
    cin>>y;
    while(q!=h || cnt==0)
    {
        cnt=1;
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

