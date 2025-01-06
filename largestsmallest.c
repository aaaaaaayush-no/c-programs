#include <stdio.h>

int main() {
    int a[10][10], temp[100], n, m, i, j, k = 0;

    // Input the dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    // Input the elements of the 2D array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Copy the elements of the 2D array to a 1D array
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            temp[k++] = a[i][j];
        }
    }

    // Sort the 1D array
    for (i = 0; i < k - 1; i++) {
        for (j = i + 1; j < k; j++) {
            if (temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    // Print the elements in ascending order
    printf("The elements in ascending order are:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}