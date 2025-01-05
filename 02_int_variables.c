
//  integer type variables are represented by int and %d is used to print integer values
// # include <stdio.h>
// int main(){
//     int x;
//     x=10;
//     x=x+4;
//     x=x-5;
//     printf("Hi\nThe value of x is %d",x);

//     return 0;
// }

# include<stdio.h>
int main(){
    int a=4;
    int b=8;
    printf("sum=%d\n",a+b);
    printf("subtration=%d\n",a-b);
    printf("product=%d\n",a*b);
    printf("division=%d\n",a/b); // division of int or %d is always integer, see GIF [4/8]=[0.5]=0
    return 0;
}