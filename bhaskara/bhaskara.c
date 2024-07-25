#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;

    printf("a: \n");
    scanf("%lf", &a);
    printf("b: \n");
    scanf("%lf", &b);
    printf("c: \n");
    scanf("%lf", &c);

    double delta = (pow(b,2) - 4 * a*c);
    printf("\nDelta: %lf\n", delta);

    if(delta==0){
        float x1 = (b + sqrt(delta)) / (2*a);
        printf("x1: %lf\n", x1);
    }else{
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("x1: %lf\n", x1);
        printf("x2: %lf\n", x2);
    }

    return 0;
}
