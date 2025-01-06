#include <stdio.h>
int main(){
    int n, a=0,b=1,nextterm;
    printf("Enter n: ");
    scanf("%d",&n);
    int i=3;
    while(i<=n){
        nextterm=a+b;
        a=b;
        b=nextterm;
        i++;
    
        if(i%2==0){
        printf("\t");
        printf("%d\n", nextterm);
        
        }
        else if(i%2!=0){
         printf("\t");
        printf("%d\n", nextterm);
        printf("\t");
        }
        
        
        
    }

    
    return 0;
}