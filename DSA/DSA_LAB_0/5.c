#include <stdio.h>

int main()
{
    int i,a[10];
    printf("enter the array elements : \n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\nthe elements are : ");
    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);

    }
return 0;
}