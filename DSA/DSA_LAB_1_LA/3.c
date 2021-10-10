#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,n1,f=0,*p;
	
	printf("Enter number of elements :");
	scanf("%d",&n);
	p=(int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&p[i]);
	}
	printf("Enter which element you want to check :");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(p[i]==n1)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("element is present  at index %d",i);
	}
	else
	{
		printf("The element is not present ");
	}
}