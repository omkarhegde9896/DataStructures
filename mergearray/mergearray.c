#include<stdio.h>
#include<conio.h>
int main()
{
    int a1[50],a2[50],size1,size2,i,k,res[100];
    printf("Enter size of 1st array: ");
    scanf("%d",&size1);
    printf("Enter elements of 1st array ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&a1[i]);
        res[i] =a1[i];
    }
    k=i;
    printf("\nEnter size of 2nd array ");
    scanf("%d",&size2);
    printf("Enter elements of 2nd array: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d",&a2[i]);
        res[k]=a2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d", res[i]);
    return 0;
}

