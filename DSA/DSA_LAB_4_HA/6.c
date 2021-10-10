#include <stdio.h>
#define N 4

int matrix[N][N] = {{0, 0, 1, 0},
                     {0, 0, 1, 0},
                     {0, 0, 0, 0},
                     {0, 0, 1, 0}};

int knows(int a, int b)
{
    return matrix[a][b];
}
int findCelebrity(int n)
{
    int indegree[N] = {0}, outdegree[N] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x = knows(i, j);
            outdegree[i] += x;
            indegree[j] += x;
        }
    }
    for (int i = 0; i < n; i++)
        if (indegree[i] == n - 1 && outdegree[i] == 0)
            return i;

    return -1;
}
int main()
{
    int id = findCelebrity(N);
    if (id == -1)
    {
        printf("No celebrity");
    }
    else
    {
        printf("Celebrity ID : %d ", id);
    }
    return 0;
}