#include<stdio.h>
#define max 5


void push(int[],int *top);
int pop(int[],int *top);
void disp(int[],int *top);
void main()
{
    int ch,y;
    int stack[max];
    int top=-1;
    do
    {
        printf("\n   *** STACK OPERAIONS*** \n1.Push    2.Pop    3.display    4.exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push(stack,&top);
            break;
        case 2:
            y=pop(stack,&top);
            printf(" \nthe popped element is %d",y);
            break;
        case 3:
            disp(stack,&top);
            break;
        case 4:
            printf("Exit status");
            break;
        default:
            printf("Invalid choice");

        }
    }while(ch!=4);
}
void push(int stack[],int *top)
{
    int val;
    printf("You have selected to push an element:");
    if(*top==max-1)
        printf("\nStack is full!!! Stack Overflow!!");
    else
    {
        printf("\nEnter the element to be pushed");
        scanf("%d",&val);
        *top=*top+1;
        stack[*top]=val;
    }
}
int pop(int stack[],int *top)
{
    int z;
    printf("You have selected to pop an element:");
    if(*top==-1)
        printf("\nStack is empty!!! Stack Underflow!!");
    else
    {
        z=stack[*top];
        *top=*top-1;
    }
    return(z);
}
void disp(int stack[],int *top)
{
    int i;
    printf("You have called display the stack");
    if(*top==-1)
        printf("\nStack is empty!!! Stack Underflow!!");
    else
    {
        printf("\nthe stack status is");
        for(i=*top;i>=0;i--)
            printf("\n%d",stack[i]);

    }
}
