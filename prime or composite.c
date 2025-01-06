#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Neither prime nor composite");
        return 0;
    } else if (n == 2) {
        printf("Prime");
        return 0;
    } else {
        i = 2;
        while(i <= n / 2){
            if(n % i == 0){
                count++;
                break;
            }
            i++;
        }
        }
        if (count == 0)
            printf("Prime");
        else{
            printf("Composite");
        }
           
    return 0;
    }

    
