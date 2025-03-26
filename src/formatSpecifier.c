#include <stdio.h>

int main() {

    //%.1 = decimal precision
    //%1 = minimum field width
    //%- = left align

    float item1 = 3.20;
    float item2 = 42.85;
    float item3 = 217.50;

    printf("Item 1: %9.2f\n", item1);
    printf("Item 2: %9.2f\n", item2);
    printf("Item 3: %9.2f\n", item3);

    return 0;
}