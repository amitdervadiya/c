#include <stdio.h>

int main() {
    int i, j, start = 1;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    
}