#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d ", first);

    for (int i = 1; i <= n; i++)
    {
        next = first + second;

        printf("%d ", next);

        first = second;
        second = next;
    }

    return 0;
}