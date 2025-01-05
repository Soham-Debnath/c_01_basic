# include <stdio.h>
int main(){
    float p,r,t,SI;
    printf("enter your principle: ");
    scanf("%f",&p);
    printf("enter rate: ");
    scanf("%f",&r);
    printf("enter time: ");
    scanf("%f",&t);
    SI=p*r*t/100;
    printf("simple inetrest of principle %f for %f years at rate %f %% is = %f",p,t,r,SI);


    return 0;
}