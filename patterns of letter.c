#include <stdio.h>

void printPattern1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printPattern2(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printPattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void printPattern4(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

 void printpattern5(int n) {
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n - i; ++j) {
            printf("  ");
        }
        for( int j = 1; j <= 2 * i - 1; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
 void printpattern6(int n) {
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n - i; ++j) {
            printf("  ");
        }
        for( int j = 1; j <= 2 * i - 1; ++j) {
            printf("%d ", i);
        }
        printf("\n");
    }
}


int main() {
    int n;
    printf("Enter the number of rows: ");

    scanf("%d", &n);

    printf("Pattern 1:\n");
    printPattern1(n);

    printf("Pattern 2:\n");
    printPattern2(n);
    printf("Pattern 3:\n");
    printPattern3(n);

    printf("Pattern 4:\n");
    printPattern4(n);
    
    printf("Pattern 5:\n");
    printpattern5(n);

    printf("Pattern 6:\n");
    printpattern6(n);
    

    return 0;
}