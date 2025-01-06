#include <stdio.h>
int main(){
    int n=4;
    int i,j, a[5][5];
    printf("Enter the elemets of matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int min = a[0][0];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
    }
    if(min%2!=0){
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i==j){
                    a[i][j]=min;
                }
            }
        }
    }
    else{
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i+j==n-1){
                    a[i][j]=min;
                }
            }
        }
    
    
}
for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                printf("%d \t", a[i][j]);
            }
            printf("\n");
        }
return 0;
}