#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,x,y,counter;
	n=x=y=0;
	counter = 1;
	printf("Enter the number of elements in array:\t");
	scanf("%d",&n);
	int *a= (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element:\n",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter value of X:\t");
	scanf("%d",&x);
	printf("Enter value of Y:\t");
	scanf("%d",&y);
	
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==x)
		{
			for(int j = i+1; j < n; j++)
			{
				if(a[j]==y)
				{
					break;
				}
				counter++;
			}
		}
	}
	printf("Minimum distance b/w %d and %d is: %d\n",x,y,counter);
	return 0;
}