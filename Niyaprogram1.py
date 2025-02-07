'''
Author:NIYA PIUS
Date : 30-01-2025
C program to find whether a person is eligible for voting or not
'''

#include<stdio.h>

 int main(){

 int age;

 printf("\nEnter the age of the person");

 scanf("%d",&age);

 if(age>=18){

 printf("Congratulation! You are eligible for casting your own vote");

 }

 else{

 printf("Sorry You are not eligible for casting your own vote");

 }

 return 0;

}
