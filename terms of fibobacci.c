#include <stdio.h>
int main(){
    int n, a=0,b=1, nextterm;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("the first and second terms are 0 and 1\n");
    printf("0\n1\n");
    int i=3;
    while(i<=n){
        nextterm = a+b;
        a=b;
        b=nextterm;
        printf("%d\n", nextterm);
        i++;
    }
}