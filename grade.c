#include <stdio.h>
void main(){

    int a;

    printf("Enter your marks:");
    scanf("%d",&a);
   



if(a >= 90 && a<=100){
    printf("Your grade is A");

}
else if(a >= 80 && a<=89){
    printf("Your grade is b");

}
else if(a >= 70 && a<=79){
    printf("Your grade is c");

}
else if(a >= 60 && a<=69){
    printf("Your grade is d");

}



else{
    printf("fail");

}
}