#include<stdio.h>
main (){
    int n,i,ans=0;
    scanf("%d",&n);

    if (n==0 || n ==1){
        ans=1;
    }
    for(i=2; i<=n/2;i++){
        if (n%2 ==0){
            ans =1;
            break;
        }
    }
    if(ans==0){
        printf("this is prime number %d\n",n);
    }
    else{
        printf("this is prime not number %d\n",n);

    }
}