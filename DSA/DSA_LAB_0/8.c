#include <stdio.h>

int main()
{
    int i,temp,n;
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
    printf("%d  ",a[i]);
}
for(i=0;i<n;i=i+2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
printf("the array after swapping is : ");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;
}