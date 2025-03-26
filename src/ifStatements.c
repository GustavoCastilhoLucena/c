#include <stdio.h>

int main(){

    int age;

    printf("Tell me your age: ");
    scanf("%d", &age);

    if(age >= 16 && age <= 60){
        printf("You don't have enough score");
    }
    else if (age < 16 && age > 0){
        printf("You aren't old enough");
    }
    else if (age <= 0){
        printf("Be born fist you imbecile");
    }
    else {
        printf("you are too old, get out");
    };

    return 0;
}