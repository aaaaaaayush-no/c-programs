#include <stdio.h>
//what is thT
int main() {
    int n, i, num;
    int sum = 0, count = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num < 0) {
            continue; // Skip negative numbers
        }

        sum += num;
        count++;
    }

    if (count == 0) {
        printf("No positive numbers entered.\n");
    } else {
        average = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }

    return 0;
}