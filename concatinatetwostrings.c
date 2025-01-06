#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    // Input the first string
    printf("Enter the first string: ");
    gets(str1);

    // Input the second string
    printf("Enter the second string: ");
    gets(str2);

    // Copy the first string to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copy the second string to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null terminate the result string
    result[i] = '\0';

    // Print the concatenated string
    printf("Concatenated string: %s\n", result);

    return 0;
}