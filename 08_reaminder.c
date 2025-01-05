
#include<stdio.h>
int main(){
    float a,b;
    printf("enter dividend and divisor respectivly: ");
    scanf("%f %f",&a,&b);
    int q=a/b;
    float r=a-b*q;
    printf("quotient=%d\nremainder=%f",q,r);
    printf("\nusing modulo(%%) operator, remainder=%d", (int)a % (int)b); // %d only used in int type, ar atake bole type casting
    return 0;
}