#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *ll;
    struct node *rl;

};

struct node *h,*q,*p,*ax[50];
int n;
int main()
{
    void create();
    create();
    return 0;
}
void create()
{
    FILE *fp;
    fp=fopen("mytree.txt","r");
    int i,x,y,z;
    for(i=1;i<50;i++)

        ax[i]=(struct node*)(malloc(sizeof(struct node)));
        ax[0]=0;


     for(i=1;i<2;i++)
     {
         fscanf(fp,"%d %d %d",&x,&y,&z);
         n=i;
         if(x==1)break;
         ax[i]->data=y;

         ax[i]->ll=ax[x];
         ax[i]->rl=ax[z];

         printf("data=%d\tll=%d\trl=%d\n",ax[i]->data,ax[i]->ll,ax[i]->rl);



     }
     fclose(fp);

}
