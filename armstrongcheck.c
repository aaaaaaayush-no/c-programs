#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Store the number of digits of num in n
    n= log10(num)+1;

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    for (originalNum = num; originalNum != 0; originalNum /= 10) { 
        remainder = originalNum % 10; 
        result += pow(remainder, n);
    }

    // Check if num is an Armstrong number
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num); 
    }

    return 0;
}