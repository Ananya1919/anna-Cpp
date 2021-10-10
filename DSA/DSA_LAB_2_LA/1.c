#include <stdio.h>
#include <stdlib.h>
void sort(int *a, int n) 
{
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - i - 1; j++) 
    {
        if (a[j] > a[j + 1])
        {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        } 
    } 
}
}
void dsort(int **a, int n)
{
for (int i = 0; i < n ; i++) 
{
    for (int j = 0; j < n - 1; j++) 
    {
        for (int k = 0; k < n; k++)
        { 
            if (a[j][k] < a[j + 1][k])
            { 
                int temp = a[j][k];
                a[j][k] = a[j + 1][k];
                a[j + 1][k] = temp;
            }
        } 
    } 
}
}
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
printf("\n");
printf("Ascending order array:\n");
for (int i = 0; i < m; i++)
{ 
    sort(a[i], n);
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
printf("Decending order array:\n");
for (int i = 0; i < m; i++)
{
    dsort(a, n);
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