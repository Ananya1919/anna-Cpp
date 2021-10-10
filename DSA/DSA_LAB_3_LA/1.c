#include <stdio.h>
int  main ()
{
    int matrix[10][10];
    int i, j, m, n,in;
    int sc = 0;
    printf("enter invalid input\n");
    scanf("%d", &in);
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == in)
            {
                ++sc;
            }
        }
    }
    if (sc > ((m * n) / 2))
    {
        printf("The given matrix is Sparse Matrix \n");
    }
    else
        printf("The given matrix is not a Sparse  \n");
    printf("There are %d number of invalid", sc);
    return 0;
}