#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j, a[100][100], sum=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    printf("Enter the elements of matrix: ");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                sum+=a[i][j];
            }
        }
    
    }
    int sum1=0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i+j==n-1){
                sum1+=a[i][j];
            }
        }
        

    }
int sum3= sum+sum1;
if (n%2==1){
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(i == j && j == (n-1)/2){
            sum3-=a[i][j];
        }
        
    }
    printf("\n");
}
}
int g=sum3;


int sum4=0;
int length = log10(sum3)+1;
int remainder;
while(sum3!=0){
    remainder=sum3%10;
    sum4+=pow(remainder, length);
    sum3/=10;
}
printf("The sum of the diagonal elements is %d\n", g);
if(sum4==g){
    printf("The number is armstrong number");
}
else{
    printf("The number is not an armstrong number");
}


return 0;
}