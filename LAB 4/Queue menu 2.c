#include<stdio.h>

int queue[10];
int rear=-1;
int front=-1;

void enqueue()
{
    int val;
    if(rear==9)
        printf("Queue overflow \n");
    else
    {
        if(front==-1)
            front=0;
        else
        {
            printf("Inset the element in queue : ");
            scanf("%d",&val);
            rear=rear+1;
            queue[rear]=val;
        }
    }
}
void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}
void display()
{
    int i;
    if(front==-1)
        printf("Queue is empty \n");
    else
    {
        printf("\n\nQueue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        if(ch==1)
            enqueue();
        else if(ch==2)
            dequeue();
        else if(ch==3)
            display();
        else if(ch==4)
            break;
        else
            printf("\nWrong Choice!!");
    }
    return 0;
}
