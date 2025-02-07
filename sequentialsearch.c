'''
Author:NIYA PIUS
Date : 05-02-2025
C program to conduct sequential search in an array
'''
#include<stdio.h>
  int main(){
      int i,number,limit;
      printf("Enter the limit of array");
      scanf("%d",&limit);
      int num[limit];
      for(i=0;i<limit;i++)
      {
      	printf("Enter the elements");
      	scanf("%d",&num[i]);
      }
      printf("Enter the number to be searched");
      scanf("%d",&number);
      for(i=0;i<limit;i++)
      {
      	if(num[i]==number){
        	printf("The number is found ");
        	printf("%d",i+1);
        }
      }
     return 0;
 }
