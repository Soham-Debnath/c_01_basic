
#include<stdio.h>
int main(){
    float radius;
    printf("enter radius : ");
    scanf("%f",&radius);
    float pi=3.14;
    float volume;
    volume=4*pi*radius*radius*radius/3;
    printf("volume of sphere if %f",volume);
    return 0;
}