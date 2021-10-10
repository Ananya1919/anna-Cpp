#include<stdio.h>
int main()
{
    printf("Enter the size of the matrix-\n");
    int n;
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the array elements-\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c=0;
    int sp[n*n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0)
            {
                sp[c]=arr[i][j];
                c++;
            }
        }
    }
    int dgnl[c][c];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                dgnl[i][j]=sp[i];
            }
            else
            {
                dgnl[i][j]=0;
            }
            printf("%d ",dgnl[i][j]);
        }
        printf("\n");
    }
    return 0;
}