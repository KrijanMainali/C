#include<stdio.h>

int main()
{
    int a[5],b[5],c[5],count=0;
    int i,j;
    //input two sets;
    printf("Enter first set");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter second set");

    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    //intersection opertaion
    for(i=0;i<5;i++)
    {
        for (j=0; j<5; j++)
        {
            if (a[i]==b[j])
            {
                c[i]=a[i];
                count++;

            }
        }
    }
    printf("The intersection of two set is");
    for (i=0;i<count;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
