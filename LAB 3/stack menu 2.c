#include<stdio.h>
#include<stdlib.h>

int top=-1,stack[10];
void push()
{
    int val;
    if(top<10-1)
    {
        printf("\nEnter element to push:");
        top=top+1;
        scanf("%d",&val);
        stack[top]=val;
    }
    else
        printf("\nStack is full!!");
}
void pop()
{
    if(top<0)
        printf("\nStack is empty!!");
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("\nStack is empty!!");
    else
    {
        printf("\n\nStack is....\n");
        for(i=top;i>=0;i--)
            printf("%d ",stack[i]);
        printf("\n\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);
        if(ch==1)
            push();
        else if(ch==2)
            pop();
        else if(ch==3)
            display();
        else if(ch==4)
            break;
        else
            printf("\nWrong Choice!!");
    }
    return 0;

}
