#include <stdio.h>
#include <stdlib.h>
int non_zero(int **a,int n)
{
    int nz=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>0 || a[i][j]<0)
            nz ++;
        }
    }
    return nz;
}
int sum_lead_diagonal(int **a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                sum = sum+ a[i][j];
            }
        }
    }
    return sum;
}
void display_below_minor(int **a,int n)
{
    printf("the elements below minor diagonal are : ");
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           if(i+j>n-1)
           {
               printf("%d",a[i][j]);
           }
       }
       printf("\n");
    }
}
int product_diagonal(int **a,int n)
{
    int p=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
            {
                p = p*a[i][j];
            }
        }
    }
    return p;
}
int main()
{
    int n=0;
    printf("enter size of matrix : \t");
    scanf("%d", &n);
    int **a = (int **) malloc(n*(sizeof(int *)));
    for(int i=0;i<n;i++)
    {
        a[i] = (int*) malloc(n*sizeof(int));
    }
    printf("enter the elements of matrix :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("\nthe number of non zero elements are %d", non_zero(a,n));
    printf("\nsum of elements above leading diagonal is %d",sum_lead_diagonal(a,n));
    display_below_minor(a, n);
    printf("\nproduct of diagonal elements is : %d",product_diagonal(a,n));
    printf("\n");
    return 0;
}

