#include<stdio.h>
struct node
{
	int data;
	struct node*left,*right;
	int ht;
}node;
node*insert(node*,int);
node*delete(node*,int);
void preorder(node*);
void inorder(node*);
int height(node*);
node*rotateright(node*);
node*rotateleft(node*);
node*RR(node*);
node*LL(node*);
node*LR(node*);
node*RL(node*);
int BF(node*);
int main()
{
node*root=null;
int x,n,i,op;
do
{
printf("\n1-create:");
printf("\n2-insert:");
printf("\n3-delete:");
printf("\n4-print:");
printf("\n5-quit:");
printf("\n\nEnter your choice:");
scanf("%d",&op);
switch(op)
{
	
		}		
	}
}
