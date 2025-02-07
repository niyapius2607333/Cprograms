'''
Author: NIYA PIUS
Date : 07-02-2025
C program to conduct matrix addition of two matrices
'''
  
#include<stdio.h>
  int main(){
  int i,j,row,col;
  printf("Enter the row and column of the matrix");
  scanf("%d",&row);
  scanf("%d",&col);
  int matrix1[row][col],matrix2[row][col],matrix3[row][col];
  printf("Enter the elements of the first matrix:");
  for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         scanf("%d",&matrix1[i][j]);
      }
   }
  printf("Enter the elements of the second matrix");
  for(i=0;i<row;i++){
     for(j=0;j<col;j++){
        scanf("%d",&matrix2[i][j]);
        }
   }
  for(i=0;i<row;i++){
     for(j=0;j<col;j++){
     matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
     }
   }
  printf("The sum matrix of first and second matrix is :");
  for(i=0;i<row;i++){
     for(j=0;j<col;j++){
        printf("%d\t",matrix3[i][j]);
      }
      printf("\n");
   }
  return 0;
}
        
     
  
