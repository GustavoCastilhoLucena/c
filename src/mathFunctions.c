#include <stdio.h>
#include <math.h>

int main(){

    // square root of x
    double A = sqrt(64);
    // x to the power of y
    double B = pow(7, 2);
    // round number to the nearest integer number
    int C = round(6.9);
    // round number up
    int D = ceil(5.1);
    // round number down
    int E = floor(1.9);
    // take the absolute number (how far alway a number is from zero, turn all numbers into positives)
    double F = fabs(-30000);
    // the logarithm of x
    double G = log(3);
    // for trigonometry there's sine, cosine and tangent
    double H = sin(30);
    double I = cos(30);
    double J = tan(30);

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%.1lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);

    return 0;
}