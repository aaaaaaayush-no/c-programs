#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    if (isupper(str[0])) {
        printf("The first letter is uppercase.\n");
        printf("Uppercase version: %s\n ", strupr(str));
    } else {
        printf("The first letter is not uppercase.\n");
    }

    return 0;
}