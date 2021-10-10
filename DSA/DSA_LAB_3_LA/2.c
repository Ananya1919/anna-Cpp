#include<stdio.h>
int main() {
   int rows, cols, r, c, matrix[10][10], n;
   printf(" enter  no of rows  ");
   scanf("%d", &rows);
   printf("\n");
   printf(" enter no. of columns  ");
   scanf("%d", &cols);
   printf("\n");
   printf(" enter  elements \n");
   for(r = 0; r < rows; r++){
      for(c = 0;c < cols;c++){
         scanf("%d", &matrix[r][c]);
      }
   }
   printf("Choose from the followings:\n");
   printf("Press 1 for printing the upper triangular Matrix\n");
   printf("Press 2 for printing the lower triangular Matrix\n");
   printf("Press 3 for printing the diagonal elements\n  ");
   scanf("%d",&n);
   switch (n)
   {
   	case 1:
   		for(r = 0; r < rows; r++){
      printf("\n");
      for(c = 0; c < cols; c++){
         if(r > c){
            printf("0");
            printf("\t");
         }
         else{
            printf("%d\t ", matrix[r][c]);

         }
      }
   }
   
   break;
   
   case 2:
   	for(r = 0; r < rows; r++){
      printf("\n");
      for(c = 0; c < cols; c++){
      if(r >= c){
         printf("%d\t ", matrix[r][c]);
      }
      else{
         printf("0");
         printf("\t");
      }
   }
   }
   
   break;
   
   case 3:
   	if(rows==cols)
   	{
   	 for(r=0;r<rows;r++)
            {
                for(c=0;c<cols;c++)
                {

                    if(r==c)
                        printf("\t%d", matrix[r][c]); 
                    else
                        printf("\t");   
                }
                printf("\n\n");   
            }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }
   }
   return 0;

}