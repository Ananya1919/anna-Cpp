#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **a,n;
    printf("enter size of matrix\n");
    scanf("%d",&n);
    a= (int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    a[i]= (int*) malloc(n*sizeof(int));
    printf("enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("row \tcolumn \tvalue\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j] !=0)
            {
                printf("%d\t %d\t %d\t \n",i,j,a[i][j]);
            }

        }
    }
    return 0;
}