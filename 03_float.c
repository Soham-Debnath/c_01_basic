// floating point means all real numbers, akhane decimals use kora jabe
// floating point number er data type float and %f use kora hoy
// upto 6 decimal places can be printed using %f
# include <stdio.h>
int main(){
    float a=3.14;
    float x=5;
    float y=2;
    
    printf("%f\n",x+y);
    printf("%f\n",x*y);
    printf("%f\n",x/y);
    printf("%f\n",a);
// one number should be indicated in floating(decimal) format
    float z=5/2;
    float w=5.0/2;
    float v=5/2.0;
    float u=5.0/2.0;
    printf("\n%f\n",z);
    printf("%f\n",w);
    printf("%f\n",v);
    printf("%f\n",u);

    return 0;

}