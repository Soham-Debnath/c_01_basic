#include<stdio.h>
int main(){
    float x;
    printf("inter a real number: ");
    scanf("%f",&x);
    int y=x;
    float z=x-y;
    printf("[x]=%d\n{x}=%f",y,z);


    return 0;
}
