#include <stdio.h>
int main(){
    int n, a=0, b=1, nextterm;
    printf("Enter the value of n:");
    scanf("%d", &n);
    //special cases
    if(n==1){
        printf("The first term is 0");
        return 0;
    }
    else if (n==2){
        printf("The second term is 1");
        return 0;
    }
    int i=3;
    while(i<=n){
        nextterm=a+b;
        a=b;
        b=nextterm;
        i++;
    }
    printf("the nth term is %d", nextterm);
    return 0;
}

