#include <stdio.h>

int main(){

    //Augmented assignment operators = when a variable is modified and applied to itself with itself as an argument, modifying the original value.
    char x = 1;

    x = x + 1;
    x += 1;

    x = x - 1;
    x -= 1;
    
    x = x * 1;
    x *= 1;

    x = x / 1;
    x /= 1;

    x = x % 1;
    x %= 1;

    printf("%d", x);

    return 0;
}