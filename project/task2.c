#include <stdio.h>
void main()
{
    float a, charge, addtion;

    printf("Enter any number:");
    scanf("%f", &a);

    if (a <= 50 && a > 0)
    {
        addtion = a * 0.50;
        charge = addtion + ((addtion * 20) / 100);
        printf("Electricity bill = Rs. %0.2f", charge);
    }
    else if (a <= 150 && a > 50)
    {
        addtion = ((a - 50) * 0.75) + 25;
        charge = addtion + ((addtion * 20) / 100);
        printf("Electricity bill = Rs. %0.2f", charge);
    }
    else if (a <= 250 && a > 150)
    {
        addtion = ((a - 150) * 1.20) + 100;
        charge = addtion + ((addtion * 20) / 100);
        printf("Electricity bill = Rs. %0.2f", charge);
    }
    else
    {
        addtion = ((a - 250) * 1.50) + 220;
        charge = addtion + ((addtion * 20) / 100);
        printf("Electricity bill = Rs. %0.2f", charge);
    }
}