#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter a grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("Deffect!\n");
        break;
    case 'C':
        printf("Trash!\n");
        break;
    case 'D':
        printf("Failure!\n");
        break;
    case 'E':
        printf("Failure!\n");
        break;
    case 'F':
        printf("Failure!\n");
        break;
    default:
        printf("Write something readable you fucking animal");
        break;
    }
    
    return 0;
}