#include<stdio.h>
#include<stdlib.h>
void insertelement(int a[],int);
void deleteelement(int a[],int);
void searchelement(int a[],int);
int i;
int main()
{
    int a[i],choice,size;
    printf("\nEnter the number of elements");
    scanf("%d",&size);
    printf("\nEnter the array elements");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    while(1)
    {
    printf("Please select the operation\n1.Insert an element\n2.Delete an element\n3.Search an element\n 4.exit");
    scanf("%d",&choice);
    printf("\nThe array elements are :");
    for(i=0;i<size;i++)
    {
        printf("%d  ",a[i]);
    }
    switch(choice)
    {
        case 1:
            insertelement(a,size);
            size++;
                break;
        case 2: deleteelement(a,size);
                break;
        case 3: searchelement(a,size);
                break;
        case 4: exit(0);
        default: printf("\nInvalid choice");
    }
    }
    return(0);
}

void insertelement(int a[],int size)
{
    int pos,ele;
    printf("\nEnter the position of the element to be inserted");
    scanf("%d",&pos);
    printf("\nEnter the element to be inserted");
    scanf("%d",&ele);
    size++;
    for(i=size;i>=pos;i--)
    {
         a[i]=a[i-1];
    }
    a[pos-1] = ele;
    printf("\nThe updated array is: ");
    for(i=0;i<size;i++)
        printf("%d  ",a[i]);
}

void deleteelement(int a[],int size)
{
    int pos,n;
    printf("\nEnter the position of the element you want to delete\n");
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++)
        a[i] = a[i+1];
    size--;
    printf("The updated array is: ");
    for(i=0;i<size;i++)
        printf("%d  ",a[i]);
}
void searchelement(int a[],int size)
{
    int el;
    printf("\nEnter the element to be searched:");
    scanf("%d",&el);
    for(i=0;i<size;i++)
    {
        if(a[i]==el)
        {
            printf("The position of element is %d",i+1);
        }
    }

}

