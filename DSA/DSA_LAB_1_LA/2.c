#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    printf("Enter the number of integers to be stored in the array:");
    scanf("%d",&n);
    int*a;
    a=(int*)malloc(n*sizeof(int));
printf("\nEnter values:",i);
    for( i=0;i<n;i++)
{ 
    
    scanf("%d",&a[i]);
}
for(int i=0,j=n-1;i<n/2;i++,j--)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
for(int i=0;i<n;i++)
{
    printf("%d" ,a[i]);
}
return 0;
}