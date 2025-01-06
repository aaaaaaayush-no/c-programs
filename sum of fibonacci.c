#include <stdio.h>
int main(){
    int n, a=0,b=1,nextterm, sum=1;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n==1){
        printf("The first term is 0 and the sum is also 0");
        return 0;
    }
    else if (n==2){
        printf("The first two terms are 0 and 1 and the sum is 1");
        return 0;
    }
    int i=3;
    while(i<=n){
        nextterm=a+b;
        a=b;
        b=nextterm;
        sum+=nextterm;
        i++;
    }
    printf("The sum is %d", sum);


}