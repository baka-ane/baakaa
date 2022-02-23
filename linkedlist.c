#include <stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node * next;
};
struct node *head,*newnode,*temp;;
void insert_beg()
{
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the data:");
 scanf("%d",&newnode->data);
 if(head==NULL)
{
 newnode->next=NULL;
 head=newnode;
}
 else
 {
 newnode->next=head;
 head=newnode;
}
}
void insert_end() 
{
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the data:");
 scanf("%d",&newnode->data);
 if(head==NULL)
{
 newnode->next=NULL;
 head=newnode;
}
 else
 {
 newnode->next=0;
 temp=head;
 while(temp->next!=0)
{
 temp=temp->next;
}
 temp->next=newnode;
}
}
void insert_pos() {
 int pos,count=0,i=1;
 printf("Enter the position:");
 scanf("%d",&pos);
 if(head==NULL)

{
 newnode->next=NULL;
 head=newnode;
}
 else
 {
 temp=head;
 while(temp!=0)
{
 count++;
 temp=temp->next;
}
 if(pos>count)
 printf("Invalid position");
 else
{
 temp=head;
 while(i<pos-1)
{
 temp=temp->next;
 i++;
}
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the data:");
 scanf("%d",&newnode->data);
 newnode->next=temp->next;
 temp->next=newnode;
}
}
}
void del_beg()
{
 if(head==NULL)
{
 printf("\n The list is empty");
}
 else
 {
 temp=head;
 head=head->next;
 free(temp);
}
}
void del_end() {
 struct node *prev;
 if(head==NULL)
{
 printf("\n The list is empty");
}
41
 else
 {
 temp=head;
 while(temp->next!=0)
{
 prev=temp;
 temp=temp->next;
}
 if(temp==head)
{
 head=0;
 free(temp);
}
 else
{
 prev->next=0;
 free(temp);
}
}
}
void del_pos()
{
 struct node *nextnode;
 int pos,i=1;
 if(head==NULL)
{
 printf("\n The list is empty");

}
 else
 {
 temp=head;
 printf("Enter the position:");
 scanf("%d",&pos);
 if(pos==1)
 delbeg()
 while(i<pos-1)
{
 temp=temp->next;
 i++;
}
 nextnode=temp->next;
 temp->next=nextnode->next;
 free(nextnode);
}
}
void disp() {
 if(head==NULL)
 {
 printf("\n The list is empty");
 }
 else
 {
 temp=head;
 printf("\n The list is\n");
 while(temp!=0)
 {
 printf("%d->",temp->data);
 temp=temp->next;
 }
 printf("NULL");
 }
}
int main()
{
 int choice=1;
 struct node *temp;
 while(choice)
 {
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the data:");
 scanf("%d",&newnode->data);
 newnode->next=0;
 if(head==0)
 head=temp=newnode;
 else
 {
 temp->next=newnode;
 temp=newnode;
 }
 printf("Do you want to continue(0,1):");
 scanf("%d",&choice);
 }
 temp=head;
 while(temp!=0)
 {
 printf("%d->",temp->data);
 temp=temp->next;
 }
 printf("NULL");
 do
 {
 printf("\nMenu\n1.Insert at beginning\n2.Insert at end\n3.Insert at position\n4..Deletion at beginning\n5.Deletion at end\n6.Deletion at position\n7.Display\n8.Exit\n");
 printf("Enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 insert_beg();
 break;
 case 2:
 insert_end();
 break;
 case 3:
 insert_pos();
 break;
 case 4:
 del_beg();
 break;
 case 5:
 del_end();
 break;
 case 6:
 del_pos();
 break;
 case 7:
 disp();
 break;
 case 8:
 exit(0);

 default:
 printf("Invalid choice");

}

}
 while(choice!=9);
 return 0; 
 }
