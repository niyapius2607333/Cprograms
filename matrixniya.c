#include<stdio.h>
  int main(){
  int i,j,row,col,sum=0;
  printf("Enter the row and column of the matrix");
  scanf("%d",&row);
  scanf("%d",&col);
  int matrix[row][col];
  printf("Enter the elements of the matrix:");
  for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         scanf("%d",&matrix[i][j]);
      }
  }
  for(i=0;i<row;i++){
      for(j=0;j<col;j++){
      	if(i==j)
      	{
      	sum=sum+matrix[i][j];
      	}
      }
      
   }
   printf("%d",sum);
   
  return 0;
}
  
