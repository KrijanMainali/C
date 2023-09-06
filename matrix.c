#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],m[3][3],i,j,sum=0;
    //entering the first matrix
    printf("enter the first matrix:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
    {
        printf("enter a%d%d element",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    }
    //ebtering the second matrix
    printf("enter the second amtrix:\n");
     for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
    {
        printf("enter b%d%d element",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    }
    //logic to multiply two matrix
    int k;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {  
           sum=0;
           for(k=0;k<3;k++) 
           {
            sum=sum+a[i][k]*b[k][j];
           }
           m[i][j]=sum; 
        }
    }
    //displaying the product of two matrix
    printf("The product of two matrix is:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    
