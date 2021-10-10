#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	int *a = (int *) malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Enter %d element:\n",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if (a[i]%2!=0)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]%2==0)
				{
					int tmp;
					tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}