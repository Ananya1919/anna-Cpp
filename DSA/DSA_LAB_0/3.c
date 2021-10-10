#include <stdio.h>

int main()
{
    int i,l,n;
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
l=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>l)
    l=a[i];
}
printf("the largest element is %d",l);
return 0;
}