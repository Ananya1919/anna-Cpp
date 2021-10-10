#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    int count=1,max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
        count++;
        if(a[i]>max)
        { 
            max=a[i];
            count=1;
        } 
    }
    printf("max number is:%d and count is:%d",max,count);
    free(a);
    return 0;
}