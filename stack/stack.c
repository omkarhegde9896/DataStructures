#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push();
void pop();
void disp();
void main()
{
    int ch;
    do
    {
        printf("\n   *** STACK OPERAIONS*** \n1.Push    2.Pop    3.diplay    4.exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            disp();
            break;
        case 4:
            printf("Exit status");
            break;
        default:
            printf("Invalid choice");

        }
    }while(ch!=4);
}
void push()
{
    int val;
    printf("You have selected to push an element:");
    if(top==max-1)
        printf("\nStack is full!!! Stack Overflow!!");
    else
    {
        printf("\nEnter the element to be pushed");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    printf("You have selected to pop an element:");
    if(top==-1)
        printf("\nStack is empty!!! Stack Underflow!!");
    else
    {
        printf("\nThe popped element is %d\n",stack[top]);
        top=top-1;
    }
}
void disp()
{
    int i;
    printf("You have called display the stack");
    if(top==-1)
        printf("\nStack is empty!!! Stack Underflow!!");
    else
    {
        printf("\nthe stack status is");
        for(i=top;i>=0;i--)
            printf("\n%d",stack[i]);

    }
}
