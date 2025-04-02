#include<stdio.h>
typedef struct {
int rollno;
char name[20];
float cgpa;
}student;
int main(){
student s1[3];
for( int i=0;i<3;i++){
printf("Enter the roll number:");
scanf("%d",&s1[i].rollno);
printf("Enter the name:");
scanf("%s",s1[i].name);
printf("Enter the cgpa:");
scanf("%f",&s1[i].cgpa);
}
printf("\nThe student details are:");
for(int i=0;i<3;i++){
printf("\nROLL NO =%d",s1[i].rollno);
printf("\nNAME =%s",s1[i].name);
printf("\nCGPA=%f",s1[i].cgpa);
}
}
