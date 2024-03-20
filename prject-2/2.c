#include <stdio.h>
int main(){

    int n,j=1;

    printf("Enter any number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(n==0){
            break;
        }
       n/=10;  
         j++;
      
      
    }
    printf("%d",j);
}