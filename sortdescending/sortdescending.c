    #include <stdio.h>
    void main()
    {

        int i,j,w,n,a[30];
        printf("Enter the number of elements\n");
        scanf("%d",&n);
        printf("Enter the elements \n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if (a[i]<a[j])
                {

                    w=a[i];
                    a[i]=a[j];
                    a[j]=w;
                }
            }
        }
        printf("The elements in descending order is \n");
        for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    }


