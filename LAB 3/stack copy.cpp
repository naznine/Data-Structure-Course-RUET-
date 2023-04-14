#include<bits/stdc++.h>
using namespace std;
int s1[5],s2[5]={1,2,3,4,5},top1=-1,top3=-1,top2=4;
void push1(int y)
{
    top3=top3+1;
    s2[top3]=y;
}
void push(int n)
{

    top1=top1+1;
    s1[top1]=n;
}
int pop()
{
    int y;
    y=top2;
    top2=top2-1;
    return s2[y];
}
void display()
{
    for(int i=top1;i>=0;i--)
        cout<<s1[i]<<" ";
    cout<<"\n";
}
int main()
{
    int x,i;
    push1(1);
    push1(2);
    push1(3);
    push1(4);
    push1(5);
    for(i=0;i<5;i++)
    {
        x=pop();
        cout<<x<<endl;
        push(x);
    }
    display();
}
