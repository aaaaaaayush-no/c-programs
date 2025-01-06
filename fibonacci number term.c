#include <stdio.h>

int main() {
    int number, a=0, b=1, nextterm=1, term=2;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("0 is the 1st term in the Fibonacci series.\n");
        return 0;
    }
    if (number == 1) {
        printf("1 is the 2nd  and 3rd term in the Fibonacci series.\n");
        return 0;
    }
    while(nextterm < number){
        nextterm = a+b;
        a=b;
        b=nextterm;
        term++; 

    }
    if(nextterm == number){
        printf("%d belongs to %dth term in series", number, term);
    }
    else
    printf("%d does not belong to any term in the series", number);


    return 0;
}
