#include<bits/stdc++.h>
using namespace std;
struct node *a[10],*p;

struct node{
  int data;
   node *next;
};
void display()
{
    int i;
    for(i=0;i<10;i++)
    {
        p=a[i];
        printf("\na[%d]",i);
        while(p!=0)
        {
            printf("->%d",p->data);
            p=p->next;
        }
        printf("\n");
    }
}
int main()
{
 int k,j;

 for(int i=0;i<10;i++)
    a[i]=0;
    while(1){
      cin>>k;
    if(k<0)
        break;
    j=k%10;
     p=(node*)malloc(sizeof(node));
     p->data=k;
     p->next=a[j];
     a[j]=p;
     display();

 }
}
