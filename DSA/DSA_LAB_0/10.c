#include <stdio.h>

int main()
{
    int i,n;
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
printf("the elements in reverse order are :");
for(i=n-1;i>=0;i--)
{
    printf("%d ", a[i]);
}
return 0;
}