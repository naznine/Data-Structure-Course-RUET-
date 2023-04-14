#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
//node *h;
node* create()
{
    int x,n;
    struct node *p,*q,*h;
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

    return h;
}

void display(node *h)
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

node* Merge(node* h1, node* h2)
{
	node *t1 = new node;
	node *t2 = new node;
	node *temp = new node;

	// Return if the first list is empty.
	if(h1 == NULL)
		return h2;

	// Return if the Second list is empty.
	if(h2 == NULL)
		return h1;

	t1 = h1;

	// A loop to traverse the second list, to merge the nodes to h1 in sorted way.
	while (h2 != NULL)
	{
		// Taking head node of second list as t2.
		t2 = h2;

		// Shifting second list head to the next.
		h2 = h2->next;
		t2->next = NULL;

		// If the data value is lesser than the head of first list add that node at the beginning.
		if(h1->data > t2->data)
		{
			t2->next = h1;
			h1 = t2;
			t1 = h1;
			continue;
		}

		// Traverse the first list.
		flag:
		if(t1->next == NULL)
		{
			t1->next = t2;
			t1 = t1->next;
		}
		// Traverse first list until t2->data more than node's data.
		else if((t1->next)->data <= t2->data)
		{
			t1 = t1->next;
			goto flag;
		}
		else
		{
			// Insert the node as t2->data is lesser than the next node.
			temp = t1->next;
			t1->next = t2;
			t2->next = temp;
		}
	}

	// Return the head of new sorted list.
	return h1;
}
int main()
{
    node *h1,*h2,*h3;
    h1=create();
    display(h1);
    h2=create();
    display(h2);

    h3=Merge(h1,h2);
    display(h3);
    return 0;
}

