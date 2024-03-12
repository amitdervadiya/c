#include <stdio.h>
void main(){

    int a,b,c;


   printf("Enter a value of the first number:");
    scanf("%d",&a);
      printf("Enter a value of the  second number:");
    scanf("%d",&b); 
     printf("Enter a value of the third number:");
    scanf("%d",&c);
 
    

     if(a<b)
  {
  	if(a<c){
  		printf("first is lower");
  	}
  	else{
  			printf("third is lower");
  	}

  }
  else if(b<c){
  	printf("second is lower");
  }
  else{
  		printf("third is lower");
  }



}