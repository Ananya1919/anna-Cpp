#include<stdio.h>
 #include<stdlib.h> 
 int main()
 {
     int *p,n,i,j,t;
     printf("Enter no. of elements to be sorted :"); 
     scanf("%d",&n);
     p=(int*)malloc(n*sizeof(int));
     printf("\n Enter %d numbers :\n\n",n);
 for(i=0;i<=n-1;i++)
  {
     scanf("%d",(p+i));
  }
  for(i=0;i<n;i++)
   { 
       for(j=0;j<=i;j++)
        {
             if(*(p+i)<*(p+j))
              {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
              }
        }
   }
   printf("After sorting in ascending order:\n");
    for(i=0;i<n;i++)
    printf("\n%d",*(p+i));
     return 0;
     }