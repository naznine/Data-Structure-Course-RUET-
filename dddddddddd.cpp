#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
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


void deleteAllSameV()
{
    int x;
    printf("which value you want to delete:");
    scanf("%d",&x);

    struct Node* temp = *h, *prev;
    while (temp != NULL && temp->data == x)
    {
        *h= temp->next;           // Changed head
        free(temp);               // free old head
        temp = *h;                // Change Temp
    }
    while (temp != NULL)
    {
        // Search for the key to be deleted, keep track of the
        // previous node as we need to change 'prev->next'
        while (temp != NULL && temp->data != x)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = temp->next;

        free(temp);  // Free memory

        //Update Temp for next iteration of outer loop
        temp = prev->next;
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
    deleteAllSameV();
    display();
    return 0;
}
