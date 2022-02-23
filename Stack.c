#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int main()
{
    int stack[MAX],choice,item,Top=-1,i;
    while (i)
    {
        printf("\n****MENU ****\n");
        printf("\n****Push");
        printf("\n****2.Pop");
        printf("\n****3.Display");
        printf("\n****4.Exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                if (top == MAX-1)
                printf("Stack overfow");
                else 
                {
                    printf("\n Enter the value to be entered");
                    scanf("%d",&item);
                    Top++;
                    stack[top] = item;
                }
                break;
            }
            case 2:
            {
                if (top ==-1)
                printf("Stack is empty");
                else
                {
                   printf("Popped element is %d",stack[top]);
                   Top--;
                }
                break;
            }
            case 3:
            {
                if (top ==-1)
                printf("Stack is empty");
                else
                {
                    printf("\n Displaying stack");
                    for ( i = Top; i >= 0; i++)
                    {
                        printf("%d",stack[i]);
                    }
                    
                }
                break;
            }
            case 4:
            {
                exit(0)
            }
        }
    }
return 0;
}