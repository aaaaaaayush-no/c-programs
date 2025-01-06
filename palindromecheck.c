#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Example: Let's take num = 121
    // originalNum = 121

    // reversed integer is stored in reversedNum
    while (num != 0) {
        remainder = num % 10;          // Extract last digit: remainder = 121 % 10 = 1
        reversedNum = reversedNum * 10 + remainder; // Build reversedNum: reversedNum = 0 * 10 + 1 = 1
        num /= 10;                     // Remove last digit: num = 121 / 10 = 12

        // Next iteration:
        // remainder = 12 % 10 = 2
        // reversedNum = 1 * 10 + 2 = 12
        // num = 12 / 10 = 1

        // Next iteration:
        // remainder = 1 % 10 = 1
        // reversedNum = 12 * 10 + 1 = 121
        // num = 1 / 10 = 0
    }

    // palindrome if originalNum and reversedNum are equal
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum); // 121 is a palindrome.
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}