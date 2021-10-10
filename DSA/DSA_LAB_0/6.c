#include <stdio.h>

int main()
{
    int i,n,a[100];
    printf("enter the length of array :");
    scanf("%d",&n);
printf("enter the array elements : ");
for(i=0;i<n;i++)
{
    printf("a[%d]",i);
    scanf("%d",&a[i]);

}
printf("\nthe three digit numbers are ");
for(i=0;i<n;i++)
{
if(a[i]/100>0 && a[i]/100<10)
{
    printf("%d \n",a[i]);
}
}
return 0;
}