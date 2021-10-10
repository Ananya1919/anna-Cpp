#include <stdio.h>
#include <stdlib.h>
int main()
{
int m, n;
printf("Enter the number of rows and columns:");
scanf("%d%d", &m, &n);
int **a = (int **)malloc(m * sizeof(int *));
for (int i = 0; i < m; i++)
    { 
        a[i] = (int *)malloc(n * sizeof(int));
    }
for (int i = 0; i < m; i++)
{
     for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
}
for (int i = 0; i < m; i++)
    { 
        for (int j = 0; j < n; j++)
            { 
                printf("%d ", a[i][j]);
            }
            printf("\n");
    }  
printf("\n"); 
for (int i = 0; i < n/2; i++)
{
    for (int j = 0; j < m; j++)
    {
        int temp=a[j][i];
        a[j][i]=a[j][n-i-1];
        a[j][n-i-1]=temp;
    }
}
for (int i = 0; i < m; i++)
    { 
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
        {
             free(a[i]);
        }
        free(a);
        return 0;
}