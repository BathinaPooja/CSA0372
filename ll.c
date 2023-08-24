#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}*start=NULL;
void create()
{
 char ch;
 struct node *current,*new_node;
 do
 {
  new_node=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the data to create:");
  scanf("%d",&new_node->data);
  new_node->next=NULL;
  if(start==NULL)
  {
   start=new_node;
   current=new_node;
  }
  else
  {
   current->next=new_node;
   current=new_node;
  }
  printf("\nDo you want to create another?");
  ch=getche();
 }while(ch!='n');
}
void display()
{
 struct node *current;
 printf("\nThe linked list:");
 current=start;
 while(current!=NULL)
 {
  printf("%d-->",current->data);
  current=current->next;
 }
 printf("NULL");
}
void insert_at_beg()
{
 struct node *new_node,*current;
 new_node=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data to insert at begin:");
 scanf("%d",&new_node->data);
 new_node->next=NULL;
 if(start==NULL)
 {
  start=new_node;
 }
 else
 {
  new_node->next=start;
  start=new_node;
 }
}
void insert_at_end()
{
 struct node *new_node,*current;
 new_node=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the data to insert at an end:");
 scanf("%d",&new_node->next);
 new_node->next=NULL;
 if(start==NULL)
 {
  start=new_node;
 }
 else
 {
  current=start;
  while(current->next!=NULL)
  {
   current=current->next;
  }
  current->next=new_node;
 }
}
void insert_at_mid()
{
 int i,pos;
 struct node *q,*new_node,*current;
 new_node=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the data to insert at middle:");
 scanf("%d",&new_node->data);
 new_node->next=NULL;
 if(start==NULL)
 {
  start=new_node;
 }
 else
 {
  printf("Enter the position:");
  scanf("%d",&pos);
  current=start;
  for(i=1;i<pos-1;i++)
  {
   current=current->next;
  }
  new_node->next=current->next;
  current->next=new_node;
 }
}
void del_at_beg()
{
 struct node *del;
 del=start;
 start=start->next;
 free(del);
}
void del_at_mid()
{
 struct node *current,*del;
 int ele;
 printf("\nEnter element to delete:");
 scanf("%d",&ele);
 current=start;
 while(current->next!=NULL)
 {
  if(current->next->data==ele)
  {
   del=current->next;
   current->next=del->next;
   free(del);
  }
  current=current->next;
 }
}
void del_at_end()
{
 struct node *current,*del;
 del=start;
 while(del->next==NULL)
 {
  current=del;
  del=del->next;
 }
 free(del);
 current->next=NULL;
}
void search()
{
 int flag=0,num;
 struct node *current;
 printf("\nEnter data to search:");
 scanf("%d",&num);
 current=start;
 while(current!=NULL)
 {
  if(current->data==num)
  {
   flag=1;
  }
  current=current->next;
 }
 if(flag==1)
 {
  printf("\nThe element is present in the list");
 }
 else
 {
  printf("\nNot found");
 }
}
void count()
{
 struct node *current;
 int length=0;
 current=start;
 while(current!=NULL)
 {
  length++;
  current=current->next;
 }
 printf("\nLength of linked list:%d",length);
}
void main()
{
 int choice;
 
 printf("\n***Singly Linear Linked List*\n");
 do
 {
  printf("\n1.Create 2.Display 3.Insert at begin 4.Insert at last 5.Insert at middle 6.Deletion at begin 7.Deletion at middle 8.Deletion at end 9.Search 10.Count 11.Exit");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    create();
    break;
   case 2:
    display();
    break;
   case 3:
    insert_at_beg();
    break;
   case 4:
    insert_at_end();
    break;
   case 5:
    insert_at_mid();
    break;
   case 6:
    del_at_beg();
    break;
   case 7:
    del_at_mid();
    break;
   case 8:
    del_at_end();
    break;
   case 9:
    search();
    break;
   case 10:
    count();
    break;
   case 11:
    exit(0);
  }
 }while(choice<12);
 
}
