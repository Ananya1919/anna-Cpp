#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number of elements in array:\t");
	scanf("%d",&n);
	int *a = (int *) malloc (n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element:\n",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	printf("2nd smallest number is %d and 2nd biggest number is %d\n",a[1],a[n-2]);
	return 0;
}