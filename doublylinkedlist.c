#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}*start=0,*newnode,*temp,*ptr,*prev,*nextnode;
void create()
 { int choice=1,x;
 while(choice)
 {
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("\nenter the data :");
 scanf("%d",&x);
 newnode->data=x;
 newnode->next=0;
 if(start==0)
 start=temp=newnode;
 else
 {
 temp->next=newnode;
 temp=newnode;
 }
 temp->next=start;
 printf("enter 1 to add ,0 to exit:");
 scanf("%d",&choice);
 }
 }
 void display()
 {
 temp=start;
 if(start==0)
 printf("the list is empty");
 else
 { printf("\n Displaying list:");
 while(temp->next!=start)
 {
 printf("%d ",temp->data);
 temp=temp->next;
60
 }printf("%d",temp->data);}

}
void delbeg() 
{
 temp=start;
 if(start==0)
 printf("\n The list is empty");
 else{
 while(temp->next!=start)

{
 temp=temp->next;

}
 temp->next=start->next;
 free(start);
 start=temp->next;}
 }
void delend() {
 prev=ptr=start;
 if(start==0)
 printf("\n The list is empty");
 else {
 while(ptr->next!=start)
 {
 prev=ptr;
 ptr=ptr->next;


}
 prev->next=start;
 free(ptr);} }
void delpos()

{
 int pos,i=1,l;
 printf("enter the position:");
 scanf("%d",&pos);
 l=count();

 if(pos<0||pos>l)
 printf("
\n invalid position");
 else

{
 ptr=start;
 while(i<pos-1)
{
 ptr=ptr->next;
 i++;
}
 nextnode=ptr->next;
 ptr->next=nextnode->next;
 free(nextnode);
 }
 }

int count()
 {
 temp=start;
 int count=0;
 if(start==0)
 printf("count%d:",count);
 else
 {
 while(temp->next!=start)
 {
 count++;
 temp=temp->next;
 }
 count=count+1;
 return count;
 }}
void insertbeg()
 {
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("enter the data:");
 scanf("%d",&newnode->data);
 newnode->next=start;
 ptr=start;
 while(ptr->next!=start)
 {
 ptr=ptr->next;
 }
 ptr->next=newnode;
 start=newnode;
 return;
 }
 void insertpos()
 { int pos,i=1,l;
 printf("enter the position:");
 scanf("%d",&pos);
 l=count();
 if(pos<0||pos>l)
 printf("\n invalid position");
 else
 {
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("enter the data:");
 scanf("%d",&newnode->data);
 ptr=start;
 while(i<pos-1)
 {
 ptr=ptr->next;
 i++;
 }
 newnode->next=ptr->next;
 ptr->next=newnode;
 }
 }
 void insertend()
 {
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("enter the data:");
 scanf("%d",&newnode->data);
 newnode->next=start;
 ptr=start;
 while(ptr->next!=start)
 {
 ptr=ptr->next;
 }
 ptr->next=newnode;
 return;
 }
 int main()
 { int choice;

 create();

 do
 {
 printf("\nMenu\n1.Insert at beginning\n2.Insert at position\n3.Insert at end\n4.Deletion
at beginning\n5.Deletion at position\n6.Delete from End \n7.Display\n8.Exit\n");
 printf("Enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 insertbeg();

 break;
 case 2:
 insertpos();

 break;
 case 3:
 insertend();
 break;
 case 4:
 delbeg();
 break;
 case 5:
 delpos();
 break;
 case 6:
 delend();
 break;
 case 7:
 display();
 break;
 case 8:
 exit(0);
 default:
 printf("Invalid choice");

}

}
 while(choice!=8);
 return 0;

}