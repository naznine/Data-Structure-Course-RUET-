#include<bits/stdc++.h>
using namespace std;

struct next
{
    int data;
    next *next;
};
next *head=NULL;

void display()
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
    next *tempHead=head;
    while((tempHead)!=NULL)
    {
        cout<<(*tempHead).data<<" ";
        tempHead=(*tempHead).next;
    }
    cout<<"\n";
    }
}

void Insert(int x)
{
    next *inode=new next;
    if(head==NULL)
    {
        head=inode;
        (*inode).data=x;
        (*inode).next=NULL;
    }
    else
    {
    next *temp=head;
    (*inode).data=x;
    (*inode).next=head;
       head=inode;
    }
}
void Remove()
{
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
    next* temp=head;
    next* temp2;
    head=(*head).next;
    }
}
int main()
{
    int ch,n,pos;
    while(1)
    {
    printf("Enter Your Choice:\n1.Insert element\n2.Delete element\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Input the element you want to insert:\n");
        scanf("%d",&n);
        Insert(n);
    }
    if(ch==2)
    {
        Remove();
    }
    if(ch==3)
    {
        display();
    }
    if(ch==4)
        break;
    }
    return 0;
}

