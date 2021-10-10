#include <stdio.h>
void add()
{
    int a, b, c, d;
    printf("Enter rows and column for first matrix:\n");
    scanf("%d%d", &a, &b);
    int A[a][b];
    printf("Enter Elements:");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter rows and column for Second matrix:\n");
    scanf("%d%d", &c, &d);
    printf("Enter Elements:\n");
    int B[c][d];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    if (a == c && b == d)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                A[i][j] = A[i][j] + B[i][j];
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Addition not posible\n");
}
void multiply()
{
    int a, b, c, d;
    printf("Enter rows and column for first matrix:");
    scanf("%d%d", &a, &b);
    int A[a][b];
    printf("Enter Elements:");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter rows and column for Second matrix:");
    scanf("%d%d", &c, &d);
    printf("Enter Elements:");
    int B[c][d];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    if (c == b)
    {
        int C[a][d];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                C[i][j] = 0;
                for (int k = 0; k < b; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Multiplication not posible\n");
}
void rotate90()
{
    int a, b;
    printf("Enter rows and column for first matrix:");
    scanf("%d%d", &a, &b);
    int A[a][b];
    printf("Enter Elements:");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    int B[b][a];
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            B[i][j] = A[j][i];
        }
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}
void rotate180()
{
    int a, b;
    printf("Enter rows and column for first matrix:");
    scanf("%d%d", &a, &b);
    int A[a][b];
    printf("Enter Elements:");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    int B[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            B[i][j] = A[i][b - j - 1];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    printf("1)ADD 2 Matrix\n2)Multiply 2 matrix\n3)Rotate 90 degree\n4)Rotate 180 Degree\nEnter your choice:");
    scanf("%d", &ch);
    while (ch != 0)
    {
        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            multiply();
            break;
        case 3:
            rotate90();
            break;
        case 4:
            rotate180();
            break;
        default:
            printf("Wrong input\n");
        }
        printf("Enter your choice(to exit enter 0):");
        scanf("%d", &ch);
    }
    return 0;
}