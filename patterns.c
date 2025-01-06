#include <stdio.h>

int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; ++i) {
        for(j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // Inverted half pyramid
    for(i = rows; i >= 1; --i) {
        for(j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    // Full pyramid
    for(i = 1; i <= rows; ++i) {
        for(j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for(j = 1; j <= 2 * i - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    // Inverted full pyramid
    for(i = rows; i >= 1; --i) {
        for(j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for(j = 1; j <= 2 * i - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}