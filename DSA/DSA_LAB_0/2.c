#include <stdio.h>

int main()
{
    int i,sum=0,n;
    int a[50];
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
printf("a[%d]",i);
scanf("%d",&a[i]);
}
printf("the elements of the array are\n");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
    sum = sum+a[i];
}
printf("the sum is %d",sum);
return 0;
}