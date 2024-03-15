#include <stdio.h>

int main()
{
    int s, e;

    printf("Enter a number: ");
    scanf("%d", &s);
    printf("Enter a number: ");
    scanf("%d", &e);

    while (s <= e)
    {
        if (s % 4 == 0)
        {
            printf("%d\n", s);
        }

        s++;
    }
}