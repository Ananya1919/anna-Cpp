#include<stdio.h>
int main()
{
    int a;
    printf("enter ur age: ");
    scanf("%d",&a);
    if(a>=18 && a<=70)
    {
        printf("u r fit for driving");
    }
    else
    {
        printf("u r not fit for driving");
    }
return 0;
}
