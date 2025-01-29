#include<stdio.h>
  int main(){
  int num1,num2,sum,sub,multi,div,remain,choice;
  printf("/nEnter the two numbers");
  scanf("%d%d",&num1,&num2);
  printf("enter the operator");
  printf("\n1.Addition");
  printf("\n2.Subtraction");
  printf("\n3.Multiplication");
  printf("\n4.Division");
  printf("\n5.Remainder");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    sum=num1+num2;
    printf("The sum is ");
    printf("%d",sum);
    break;
   case 2:
    sub=num1-num2;
    printf("The difference is");
    printf("%d",sub);
    break;
   case 3:
    multi=num1*num2;
    printf("The product is ");
    printf("%d",multi);
    break;
   case 4:
    div=num1/num2;
    printf("The quotient is");
    printf("%d",div);
    break;
   case 5:
    remain=num1%num2;
    printf("The remainder is ");
    printf("%d",remain);
    break;
  }
  return 0;
 }
  

