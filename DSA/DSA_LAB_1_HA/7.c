#include<stdio.h> 
#include<stdlib.h>
void PrevNext(int a[], int n) 
{ 
    if (n <= 1) 
      return; 
    int pre= a[0]; 
    a[0] = a[0] * a[1]; 
    for (int i=1; i<n-1; i++) 
    { 
        int cur = a[i]; 
        a[i] = pre * a[i+1]; 
        pre = cur; 
    } 
    a[n-1] = pre * a[n-1]; 
} 
int main() 
{ 
    int i=0,n;
	printf("enter the size of array:\t");
	scanf("%d",&n);
	int *a = (int*) malloc( n*sizeof(int));
	printf("enter the values in array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The given array is:  \n");
	for(i = 0; i < n; i++)
		{
			printf("%d  ", a[i]);
		}
	printf("\n");
	
	printf("The new array is: \n");	
    PrevNext(a, n); 
    for (int i=0; i<n; i++) 
      printf("%d ", a[i]); 
    return 0; 
}