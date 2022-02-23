#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *newnode,*top=0,*temp;
void push() 
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&newnode->data);
newnode->next=top;
top=newnode;
}
void pop() 
{
 temp=top;
 top=top->next;
 free(temp);
 }
void display() 
{
temp=top;
while(temp!=0)
{
 printf("%d ",temp->data);
 temp=temp->next;
}
}
int main()
{ 
    int choice;
while(1) {
printf("\n1.PUSH");
printf("\n2.POP");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\nENTER YPUR CHOICE:");
scanf("%d",&choice);
switch(choice) 
{
case 1:
 push();
 break;
case 2:
 pop();
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
