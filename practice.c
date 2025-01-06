//armstrong
#include <stdio.h>
#include <math.h>
int main(){
    int num, ori_num, remainder, result=0,n;
    printf("Enter the number: ");
    scanf("%d", &num);
    ori_num=num;
    n=log10(num)+1;
    for(ori_num=num;ori_num!=0;ori_num/=10){
        remainder=ori_num%10;
        result+=pow(remainder,n);
    }
    if(result==num){
        printf("Its is an armstrong  number.");
       }
        else{
            printf("Not a armstrong number.");
        }
    return 0;
}