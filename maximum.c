#include <stdio.h>
void main()
{

    int a, b, c, d;

    printf("Enter a value of the first number:");
    scanf("%d", &a);
    printf("Enter a value of the  second number:");
    scanf("%d", &b);
    printf("Enter a value of the third number:");
    scanf("%d", &c);
    printf("Enter a value of the fourth number:");
    scanf("%d", &d);

    if (a > b && a > c)
    {
        if (a > d)
        {
            printf("first is max");
        }
        else
        {
            printf("fourth is max");
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("second is max");
        }
    }
    else if (c > d)
    {
        printf("third is max");
    }
    else
    {
        printf("fourth  is max");
    }
}