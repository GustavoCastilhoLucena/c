#include <stdio.h>

int main(){

    int x;      // declaration
    x = 65;     // inicialization
    int y = 56; // declaration and initialization

    int fingers = 10;       // interger
    float weight = 50.5;    // float point number
    char tier = 'S';        // single character
    char month[] = "march"; // array of characters

    printf("Your birthday's month is %s.\n", month);
    printf("You have %d fingers.\n", fingers);
    printf("Your tier is %c.\n", tier);
    printf("Your weight is %f.\n", weight);

    return 0;
}