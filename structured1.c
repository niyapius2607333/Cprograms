#include<stdio.h>
struct student{
int rollno;
char name[20];
float cgpa;
};
int main(){
struct student s1;
printf("Enter the roll number:");
scanf("%d",&s1.rollno);
printf("Enter the name:");
scanf("%s",s1.name);
printf("Enter the cgpa:");
scanf("%f",&s1.cgpa);
printf("\nThe student details are:");
printf("\nROLL NO =%d",s1.rollno);
printf("\nNAME =%s",s1.name);
printf("\nCGPA=%f",s1.cgpa);
}
