#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("What is the sine of the triangle? ");
    scanf("%lf", &A);
    
    printf("What's the cosine of the triangle? ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("The triangle hypotenuse is %lf.", C);

    return 0;
}