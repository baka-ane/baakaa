#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int cqueue[MAX];
int front=-1;
int rear=-1;
int main( )
{
int choice,item;
while(1)
{
 printf("\n 1.Insert");
 printf("\n 2.Delete");
 printf("/n 3.Display");
 printf("/n 4.Quit");
 printf("/\nEnter your choice : ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
 printf("Input the element for insertion in queue : ");
 scanf("%d",&item);
 if((front==-1)&&(rear==-1))
 {
 front=0;
 rear=0;
 cqueue[rear]=item;
 }
 else
 {
 if(((rear+1)%MAX)==front)
 printf("\n Q is full");
9
 else
 {
 rear=(rear+1)%MAX;
 cqueue[rear]=item;
 }
 }
 break;
 }
 case 2:
 {
 if((front==-1)&&(rear==-1))
 printf("\n Q IS EMPTY");
 else
 {
 if(front==rear)
 else
 {
 printf("%d ",cqueue[front]); 
 front=((front+1)%MAX);
 }
 }
 break;
 }
 case 3:
 {
 if((front==-1)&&(rear==-1))
 printf("\nQ is empty");
 else
 {
 printf("\n Displaying Q");
 int i=front;
 while(i!=rear)
 {
 printf("%d ",cqueue[i]);
 i=((i+1)%MAX);
 }
 printf("%d ",cqueue[rear]);
 }
 break;
 }
 case 4:
 exit(0);
 default:
 printf("Wrong choice");
 }
10
 }
 return 0;
 }