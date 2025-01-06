#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    while (sum >= 10) {
        int temp = sum;
        sum = 0;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }
    printf("Sum of digits: %d\n", sum);
}
