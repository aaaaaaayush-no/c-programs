#include <stdio.h>
int main(){
    int p, q, limit,sum=0;
printf("Enter the limit: ");
scanf("%d", &limit);
printf("Enter the value of p: ");
scanf("%d", &p);
printf("Enter the value of q: ");
scanf("%d", &q);

for (int i = 1; i <= limit; i++)
{
    if (i%2!=0 && i % p == 0 && i % q != 0)
    {
        sum += i;
    }
}
printf("The sum of the numbers divisible by %d and %d is %d", p, q, sum);
return 0;
}