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

void deleteKey()
{
    // Store head node
    struct node* temp = *head_ref, *prev;

    // If head node itself holds the key or multiple occurrences of key
    while (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        temp = *head_ref;         // Change Temp
    }

    // Delete occurrences other than head
    while (temp != NULL)
    {
        // Search for the key to be deleted, keep track of the
        // previous node as we need to change 'prev->next'
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == NULL) return;

        // Unlink the node from linked list
        prev->next = temp->next;

        free(temp);  // Free memory

        //Update Temp for next iteration of outer loop
        temp = prev->next;
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

