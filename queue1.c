#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *newnode,*front=0,*rear=0,*temp;
void enqueue() 
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(front==0 &&rear==0) 
{
front=rear=newnode;
}
else 
{
rear->next=newnode;
rear=newnode;
}
}
void dequeue() 
{
temp=front;
if(front==0 &&rear==0)
 printf("queue is empty");
else
{if(front==rear)
{ printf("%d",front->data);
front=rear=0;
free(temp);
}
else 
{
printf("%d",front->data);
front=front->next;
free(temp);

}
}
}

void display() {
 if(front==0 &&rear==0)
 printf("queue is empty");
else {
temp=front;
while(temp!=0)
{
 printf("%d ",temp->data);
 temp=temp->next;

}

}
}
int main()
{ 
    int choice;
    while(1) 
{
printf("\n1.ENQUEUE");
printf("\n2.DEQUEUE");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\nENTER YOUR CHOICE:");
scanf("%d",&choice);
switch(choice) 
{
case 1:
 enqueue();
 break;
case 2:
 dequeue();
 break;
case 3:
 display();
 break;
case 4:
 exit(0);
}
}
return 0;
}
Output