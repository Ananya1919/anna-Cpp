#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    int even=0;
    for(int i=0;i<n;i++)
    { 
        if(p[i]==0)
        {
            int temp=p[i];
            p[i]=p[even];
            p[even]=temp;
            even++;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}