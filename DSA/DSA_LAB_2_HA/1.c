#include<stdio.h>
typedef struct employee
{
    int id;
    char name[40];
    int age;
    int basic;
}employee;
float gross(employee *s)
{
    float a=s->basic;
    return (a+a);
}
int main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct employee s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Name:");
        scanf("%s",s[i].name);
        printf("Enter Id:");
        scanf("%d",&s[i].id);
        printf("Enter Age:");
        scanf("%d",&s[i].age);
        printf("Enter Basic Salary:");
        scanf("%d",&s[i].basic);
    }
    printf("\n");
    printf("\nId\tName\t\t\tAge\tBasic Salary\tGross Salary\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",s[i].id);
        printf("\t%s",s[i].name);
        printf("\t\t\t%d",s[i].age);
        printf("\t%d",s[i].basic);
        printf("\t\t%f",gross(&s[i]));
        printf("\n");
    }
    return 0;
}