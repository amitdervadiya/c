#include <stdio.h>
void main()
{
    int a, i = 1;
    printf("Enter any number:");
    scanf("%d",&a);


    while (i <= a)
    {
        printf("%d\n",i);
        i++;
    }
}