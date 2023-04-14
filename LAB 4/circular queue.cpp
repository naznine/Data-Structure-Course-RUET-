#include<stdio.h>
#include<stdlib.h>
#include<process.h>

#define MAX 5
int rear=0,front=0,a[MAX];

void enqueue();
void dequeue();
void display();
int main()


{
    int l;

    while(1)
    {
        printf("\n**Queue Options**\n");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your option\n");
        scanf("%d",&l);

        if(l==1)
            enqueue();
        if(l==2)
            dequeue();
        if(l==3)
           display();
        if(l==4)
            break;


    }

}

void enqueue()
{
    int i,k;
    scanf("%d",&k);
    if(rear==MAX-1)
    {
        rear=0;
        if(rear==front)
        {
            rear=MAX-1;
            printf("Queue is full\n");
        }
        else
        {
            a[rear]=k;
        }

    }
    else{
        if(rear+1==front)
        {
            printf("Queue is full\n");
        }
        else{
            rear=rear+1;
            a[rear]=k;
        }
    }

}

void dequeue()
{

    if(rear==front)
    {
        printf("Queue is empty\n");
    }
    else{
        if(front==MAX-1)
        {
            front=0;

        }
        else{
            front=front+1;


        }
    }
}

void display()
{
    int i;

    if(rear==-1)
    {
        printf("Queue is empty\n");
    }
    else{
        for(i=front+1;i<=rear;i++)
        {
            printf("%d\n",a[i]);
        }
    }


}
