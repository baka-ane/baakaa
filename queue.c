#include <stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX];
int rear = - 1;
int front = - 1;
int main()
{
 int choice;
 while (1)
 {
 printf("1.Insert element to queue \n");
 printf("2.Delete element from queue \n");
 printf("3.Display all elements of queue \n");
 printf("4.Quit \n");
 printf("Enter your choice : ");
 scanf("%d", &choice);
 switch (choice)
 {

case 1:
 {
 int num;
 if (rear == MAX - 1)
 printf("Queue Overflow \n");
 else
 {
 if (front == - 1)
 
 front = 0;
 printf("Inset the element in queue : ");
 scanf("%d", &num);
 rear = rear + 1;
 queue[rear] = num;
 }
 break;
 }
 case 2:
 {
 if (front == - 1 || front > rear)
 {
 printf("Queue Underflow \n");
 
}
else
{
 printf("Element deleted from queue is : %d\n", queue[front]);
 front = front + 1;
 }
 break;
 } 
 case 3:
 {
 int i;
 if (front == - 1)
 printf("Queue is empty \n");
 else
 {
 printf("Queue is : \n");
 for (i = front; i <= rear; i++)
 printf("%d ", queue[i]);
 printf("\n");
 }
 break;
 } 
 case 4:
 exit(1);
 default:
 printf("Wrong choice \n");
 } 
 } 
 return 0;
} 
