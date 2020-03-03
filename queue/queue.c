#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[10];
int front=-1;
int rear=-1;
void insert()
{
    int additem;
    front=0;
    if(rear>=MAX-1)
    {
        printf("stack overflow!!!");
    }
    else
    {
        printf("Enter the value to be inserted:");
        scanf("%d",&additem);
        rear=rear+1;
        arr[rear]=additem;
    }
}
void delet()
{
    if(rear==0||rear>front)
    {
        printf("deleted element is %d",arr[front]);
        front=front+1;
    }
    else
    {
        printf("stack is Empty!!");
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int ch;
  while(1)
   {
    printf("\n1.Insert an element\n2.Deleting an element\n3.Displaying Elements\n4.Exit\n");
    printf("Enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert();
                break;
        case 2:delet();
                break;
        case 3:display();
                break;
        case 4:exit(0);
        default : printf("Wrong choice");
    }
   }
}

