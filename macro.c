#include<stdio.h>
#define Pi 3.14159
int main(){
int r,h;
float area1,area2;
printf("\nEnter the radius of circle and height of cylinder");
scanf("%d%d",&r,&h);
area1=Pi*r*r;
area2=2*Pi*r*r+2*Pi*r*h;
printf("The area of circle %f",area1);
printf("\nThe area of cylinder %f",area2);
return 0;
}
