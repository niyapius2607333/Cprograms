#include<stdio.h>
  int main(){
     int i,limit,largest,smallest;
     printf("Enter the limit");
     scanf("%d",&limit);
     int num[limit];
     for(i=0;i<limit;i++)
     {
       printf("Enter the elements");
       scanf("%d",&num[i]);
     }
     largest=num[0];
     smallest=num[0];
     for(i=0;i<limit;i++){
        if(num[i]>largest){
          largest=num[i];
          }
    	if(num[i]<smallest){
    	  smallest=num[i];
     	}
     }
     printf("THE LARGEST NUMBER IS ");
     printf("%d",largest);
     printf("position =%d",i+1);
     printf("THE SMALLEST ELEMENT IS");
     printf("%d",smallest);
     printf("position=%d",i+1);
     return 0;
 }
     
     
