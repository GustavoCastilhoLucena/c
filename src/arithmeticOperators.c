#include <stdio.h>

int main(){

    // arithmetic operators

    // / (division)
    // % (modulus)
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // ++ (increment)
    // -- (decrement)

    int y = 3;
    int x = 7;

    float z = x / (float) y;
    int w = x % y;

    x++;
    y--;

    printf("%f\n", z);
    printf("%d\n", w);

    return 0;
}