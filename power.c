'''
Author:NIYA PIUS
Date : 26-03-2025
C program to find power of a number
'''
#include<stdio.h>
int multiply (int num1,int num2){
if(num2==0)
{
return 1;
}
else if(num2==1){
return num1;
}
else 
{
return num1*multiply(num1,num2-1);
}
}
int main(){
int num1,num2;
printf("Enter the base as num1 and exponent as num2");
scanf("%d%d",&num1,&num2);
printf("the power of given number is%d",multiply(num1,num2));
}



