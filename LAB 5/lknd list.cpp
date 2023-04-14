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

void Insert(int x,int position)
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
    if(position==1)
    {
      (*inode).next=head;
      head=inode;
    }
    else
    {
        for(int i=1;i<position-1;i++)
        {
            temp=(*temp).next;
        }
        (*inode).next=(*temp).next;
        (*temp).next=inode;
    }
    }
}
void Remove(int position)
{
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
    next* temp=head;
    next* temp2;
    if(position==1)
    {
        head=(*head).next;
    }
    else
    {
        for(int i=1;i<position-1;i++)
        {
            temp=(*temp).next;
        }
        temp2=(*temp).next;
        (*temp).next=(*temp2).next;
    }
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
        printf("Input the element at which position you want to insert:\n");
        scanf("%d %d",&n,&pos);
        Insert(n,pos);
    }
    if(ch==2)
    {
        printf("\nInput the position at which you want to delete element:\n");
        scanf("%d",&pos);
        Remove(pos);
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
