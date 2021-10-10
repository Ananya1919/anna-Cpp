#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    printf("Enter N and K:");
    scanf("%d%d",&n,&k); 
    int *a=(int*)malloc(n*sizeof(int)); 
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++) 
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]) 
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            } 
        } 
    }
printf("\nThe %dth smallest and largest element in the array are:%d %d respectively",k,a[k-1],a[n-k]); 
free(a); 
return 0;
}