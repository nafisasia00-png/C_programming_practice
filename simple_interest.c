#include<stdio.h>
int main(){
   float P,R,T;
    printf("Enter P:");
    scanf("%f",&P);
    printf("Enter R:");
    scanf("%f",&R);
    printf("Enter T:");
    scanf("%f",&T);
    printf("simple interest is %2f\n",(P*R*T)/100);
    return 0;
}
