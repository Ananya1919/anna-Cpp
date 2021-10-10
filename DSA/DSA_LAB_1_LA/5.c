#include <stdio.h>

int main()
{
    int n,i,a,b,c=0,d=2;

    printf("Enter size of array: ");
    scanf("%d",&n);
    
    printf("Enter elements of array: ");

    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    printf("\nEnter lower limit element & upper limit element respectively: ");
    scanf("%d %d",&a,&b);

    for(i=0;i<n;i++){ 
        if(arr[i]==a || arr[i]==b){
            c++;
            d=0;
        }
        
        if(arr[i]>a && arr[i]<b){
            c++;
        }
    }

    printf("Number of elements in between two elements : %d",c+d);

    return 0;
}