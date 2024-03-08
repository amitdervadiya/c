#include <stdio.h>

void main(){

    int age;

    printf("Enter a value of the first number:");
    scanf("%d",&age);
    



if(age > 18){
    printf("you can vote:");

}
else if(age==18){
    printf("you can also vote ");
}
else{
    printf("you cannot vote");
}
}