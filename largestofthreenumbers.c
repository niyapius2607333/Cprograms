#include<stdio.h>
 int main(){
 int num1,num2,num3,largest=0;
  printf("\nEnter the three numbers");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2)
  { 
   if(num1>num3)
    {
     largest=num1;
     printf("the largest number is ");
     printf("%d",largest);
    }  
   else
    {
     largest=num3;
     printf("The largest number is ");
     printf("%d",largest);
   }
   }else if(num2>num1)
   {
  if(num2>num3){
   printf("the largest number is ");
   printf("%d",num2);
   }
  else{
   printf("the largest number:");
   printf("%d",num3);
  }
  }
  return 0;
}

